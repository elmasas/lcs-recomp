#!/usr/bin/env python3
"""Controller for the opt-in Portland safehouse bike QA scenario."""
import json
import math
import time


class Director:
    def __init__(self, control, output):
        self.control = control
        self.output = output
        output.mkdir(parents=True, exist_ok=True)
        self.phase = 'startup'
        self.last_time = -1
        self.drive_previous = None
        self.wheelie_until = None
        self.wheelie_done = False
        self.wheelie_peak = 0

    def command(self, text):
        temporary = self.control / 'route-command.tmp'
        temporary.write_text(text + '\n')
        temporary.replace(self.control / 'command.txt')

    def read(self):
        try:
            return json.loads((self.control / 'state.json').read_text())
        except (OSError, ValueError):
            return None

    def sample(self, timeout=3):
        deadline = time.monotonic() + timeout
        while time.monotonic() < deadline:
            state = self.read()
            if state and state['t'] > self.last_time:
                self.last_time = state['t']
                with (self.output / 'route-states.jsonl').open('a') as log:
                    log.write(json.dumps(dict(state, phase=self.phase)) + '\n')
                return state
            time.sleep(.03)
        raise RuntimeError('game telemetry stopped updating')

    def event(self, name, state):
        with (self.output / 'events.jsonl').open('a') as log:
            log.write(json.dumps(dict(state, event=name)) + '\n')
        labels = {'interior': 'Gameplay ready', 'exit-transition': 'Safehouse exited',
                  'garage-bike': 'Garage bike found', 'mounted': 'Mounted garage bike',
                  'wheelie-start': 'Wheelie started', 'wheelie-end': 'Wheelie input released',
                  'returned': 'Returned to garage yard'}
        if name in labels:
            print(f'{labels[name]} ({state["t"]:.1f}s)', flush=True)
        elif name == 'failed':
            print(f'Route failed: {state.get("error", "unknown error")}', flush=True)

    def walk(self, x, y, radius=.6, timeout=12):
        self.phase = f'walk {x} {y}'
        self.command(f'goto {x} {y} {radius}')
        deadline = time.monotonic() + timeout
        anchor = None
        anchor_time = time.monotonic()
        inside = (self.read() or {}).get('z', 0) > 20
        try:
            while time.monotonic() < deadline:
                state = self.sample()
                if not state['ready']:
                    continue
                if inside and state['z'] < 20:
                    self.event('exit-transition', state)
                    return state
                distance = math.hypot(state['x'] - x, state['y'] - y)
                if distance < radius + .15:
                    self.event('walk-arrival', state)
                    return state
                if anchor is None or math.hypot(state['x'] - anchor[0], state['y'] - anchor[1]) > .25:
                    anchor = state['x'], state['y']
                    anchor_time = time.monotonic()
                elif time.monotonic() - anchor_time > 1.5:
                    raise RuntimeError(f'walking stalled before {x}, {y}')
            raise RuntimeError(f'walking timed out before {x}, {y}')
        finally:
            self.command('hold')

    def stop_bike(self):
        self.command('stick 128 255 512')
        time.sleep(.3)
        self.command('stick 128 128 512')

    def ride(self, x, y, cruise=4, radius=4, timeout=35):
        self.phase = f'ride {x} {y}'
        previous = self.drive_previous
        deadline = time.monotonic() + timeout
        anchor = None
        anchor_time = time.monotonic()
        try:
            while time.monotonic() < deadline:
                state = self.sample()
                if not state['driving'] or not 202 <= state['vehicle_model'] <= 210:
                    raise RuntimeError('player is no longer riding the garage bike')
                speed = 0 if previous is None else math.hypot(
                    state['x'] - previous['x'], state['y'] - previous['y']) / (state['t'] - previous['t'])
                previous = state
                self.drive_previous = state
                dx, dy = x - state['x'], y - state['y']
                distance = math.hypot(dx, dy)
                if distance < radius:
                    self.event('ride-arrival', state)
                    return state
                if anchor is None or math.hypot(state['x'] - anchor[0], state['y'] - anchor[1]) > .3:
                    anchor = state['x'], state['y']
                    anchor_time = time.monotonic()
                elif time.monotonic() - anchor_time > 2:
                    raise RuntimeError(f'bike stalled before {x}, {y}')
                fx, fy = state['facing_x'], state['facing_y']
                length = math.hypot(fx, fy)
                if length < .2:
                    raise RuntimeError('bike heading unavailable')
                cross = (fx * dy - fy * dx) / (length * distance)
                dot = (fx * dx + fy * dy) / (length * distance)
                # Compensate for the stick dead zone, then increase lock for
                # heading error. Small raw corrections otherwise drift to a curb.
                turn = 0 if abs(cross) < .025 else math.copysign(
                    35 + 92 * min(1, abs(cross) * 2), cross)
                steering = max(0, min(255, round(128 - turn)))
                if dot < 0:
                    steering = 15 if cross > 0 else 240
                desired = min(cruise, max(5, distance * .8))
                if dot < .8:
                    desired = min(desired, 4.5)
                throttle = max(0, min(255, round(35 + 30 * (desired - speed))))
                brake = max(0, min(100, round(18 * (speed - desired - 2))))
                if not self.wheelie_done and self.wheelie_until is None and y == -276 and \
                        -245 < state['y'] < -232 and dot > .99 and 6 < speed < 11:
                    self.wheelie_until = state['t'] + 1.2
                    self.event('wheelie-start', state)
                pitch = 128
                if self.wheelie_until is not None:
                    self.wheelie_peak = max(self.wheelie_peak, state.get('vehicle_pitch', 0))
                    if state['t'] < self.wheelie_until and state.get('vehicle_pitch', 0) < .65:
                        pitch, throttle, brake = 255, max(180, throttle), 0
                    else:
                        self.wheelie_done = True
                        self.wheelie_until = None
                        self.event('wheelie-end', dict(state, peak_pitch=self.wheelie_peak))
                self.command(f'drive {steering} {throttle} {brake} {pitch}')
            raise RuntimeError(f'bike timed out before {x}, {y}')
        except BaseException:
            self.stop_bike()
            raise

    def run(self):
        self.command('hold')
        deadline = time.monotonic() + 90
        while time.monotonic() < deadline:
            state = self.sample(timeout=10)
            if state['ready']:
                break
        else:
            raise RuntimeError('gameplay did not start')
        if state['z'] < 20 or math.hypot(state['x'] - 1138.8, state['y'] + 242.405) > 3:
            raise RuntimeError('manual QA requires the Portland safehouse interior starting save')
        self.event('interior', state)
        for point in [(1142.8, -242.4, .4), (1142.8, -246, .5), (1147, -246, .6)]:
            state = self.walk(*point)
            if state['z'] < 20:
                break
        state = self.walk(1156.7, -265.2, .5)
        if state['z'] >= 20:
            raise RuntimeError('player did not leave the interior')
        self.event('outside', state)
        self.phase = 'garage'
        deadline = time.monotonic() + 8
        while time.monotonic() < deadline:
            state = self.sample()
            if state['bike_near'] and 1152 < state['bike_x'] < 1162 and -275 < state['bike_y'] < -266:
                break
        else:
            raise RuntimeError('no bike appeared in the safehouse garage')
        garage = dict(state)
        self.event('garage-bike', garage)
        self.walk(garage['bike_x'], garage['bike_y'] + 2, .5)
        self.phase = 'mount'
        self.command('enter')
        time.sleep(.15)
        self.command('hold')
        deadline = time.monotonic() + 10
        while time.monotonic() < deadline:
            state = self.sample()
            if state['driving']:
                break
        else:
            raise RuntimeError('could not mount the garage bike')
        self.event('mounted', state)
        if not 202 <= state['vehicle_model'] <= 210:
            raise RuntimeError('mounted vehicle is not a bike')
        if state['facing_y'] > -.8 or state['y'] > -266:
            raise RuntimeError('manual QA requires a bike parked facing the back of the garage')
        self.phase = 'reverse-out'
        self.command('stick 128 255 0')
        deadline = time.monotonic() + 8
        while time.monotonic() < deadline:
            state = self.sample()
            if state['y'] > -254:
                break
        else:
            raise RuntimeError('could not reverse clear of the garage')
        self.stop_bike()
        start = self.sample()
        self.event('burnout-start', start)
        # Turn west into the open yard, away from the east wall.
        self.phase = 'turn-out'
        deadline = time.monotonic() + 20
        self.command('drive 255 255 255')
        while time.monotonic() < deadline:
            state = self.sample()
            cross = start['facing_x'] * state['facing_y'] - start['facing_y'] * state['facing_x']
            dot = start['facing_x'] * state['facing_x'] + start['facing_y'] * state['facing_y']
            burnout_angle = math.degrees(abs(math.atan2(cross, dot)))
            if burnout_angle >= 150:
                break
        else:
            raise RuntimeError('could not turn out of the garage yard')
        self.stop_bike()
        self.event('burnout-end', dict(state, angle_degrees=burnout_angle))
        for point in [(1158, -239, 5.5, 3), (1158, -217, 5.5, 4),
                      (1127, -212, 7, 5), (1127, -276, 8, 3),
                      (1146, -284, 5.5, 4), (1187, -284, 8, 5),
                      (1198, -265, 5.5, 4), (1198, -217, 8, 5),
                      (1184, -207, 5.5, 4), (1163, -211, 6, 2),
                      (1161, -223, 4.5, 2), (1160, -235, 5.5, 3), (1157, -261, 4, 2)]:
            state = self.ride(*point)
        self.stop_bike()
        state = self.sample()
        self.event('returned', state)
        if not self.wheelie_done:
            raise RuntimeError('the straight street did not provide a safe wheelie opportunity')
        if self.wheelie_peak < .25:
            raise RuntimeError('the wheelie input did not visibly lift the front of the bike')
        (self.output / 'route-result.json').write_text(json.dumps({
            'completed': True, 'garage_bike': garage, 'final_state': state,
            'wheelie_attempted': self.wheelie_done, 'wheelie_peak_pitch': self.wheelie_peak,
            'burnout_angle_degrees': burnout_angle,
            'note': 'Inspect the recorded frames to verify street clearance and wall contact.'}, indent=2) + '\n')
