#!/usr/bin/env python3
"""Map of the 100 Liberty City Stories hidden packages.

Positions come from the spawn loop in MAIN.SCM. Found state comes from script
globals $11..$110 in the PSP save (0 not found, 1 found). The page polls that
file, so it updates when the game writes the save.

    python3 tools/hidden_packages/server.py
    http://127.0.0.1:8765/
"""

from __future__ import annotations

import argparse
import json
import struct
import zlib
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SCM_PATH = ROOT / "lcs/game/PSP_GAME/USRDIR/DATA/MAIN.SCM"
IMG_PATH = ROOT / "lcs/game/PSP_GAME/USRDIR/MODELS/GTA3PSPHR.IMG"
DEFAULT_SAVE = ROOT / "lcs/game/PSP/SAVEDATA/ULUS10041S0/DATA.BIN"

# The pause-map radar is 8x8 tiles of 128px covering world -2000..2000.
RADAR_MIN = -2000.0
RADAR_SPAN = 4000.0
TILES = 8
TILE = 128
MAP_PX = TILES * TILE

REWARDS = (
    (10, "Pistol"),
    (20, "Shotgun"),
    (30, "Body armor"),
    (40, "MP5"),
    (50, "Magnum"),
    (60, "M4"),
    (70, "Sniper rifle"),
    (80, "Flamethrower"),
    (90, "Rocket launcher"),
    (100, "$50,000"),
)


def read_float(data: bytes, index: int) -> tuple[float, int]:
    """Read one SCM float. 09 is a full float32. 05 and 04 omit low zero bytes."""
    kind = data[index]
    if kind == 0x09:
        return struct.unpack_from("<f", data, index + 1)[0], index + 5
    if kind == 0x05:
        raw = b"\x00" + data[index + 1 : index + 4]
        return struct.unpack_from("<f", raw)[0], index + 4
    if kind == 0x04:
        raw = b"\x00\x00" + data[index + 1 : index + 3]
        return struct.unpack_from("<f", raw)[0], index + 3
    if kind == 0x02:
        return 0.0, index + 1
    raise ValueError(f"unexpected float type {kind:#x} at {index:#x}")


def load_packages(scm: bytes) -> list[dict]:
    """Walk the 100-iteration hidden-package spawn loop."""
    marker = b"\x38\x00\xcc\x0b\x01"
    start = 0
    while True:
        start = scm.find(marker, start)
        if start < 0:
            raise SystemExit(f"hidden-package spawn loop not found in {SCM_PATH}")
        if scm[start + 12 : start + 14] == b"\x18\x02":
            break
        start += 1

    index = start
    packages = []
    for number in range(1, 101):
        if scm[index : index + 3] != b"\x38\x00\xcc":
            break
        global_id = scm[index + 3]
        if scm[index + 4] != 0x01 or not 11 <= global_id <= 110:
            break
        index += 5
        if scm[index : index + 3] != b"\x4d\x00\x06" or scm[index + 7 : index + 9] != b"\x18\x02":
            break
        index += 9
        if scm[index] != 0x08 or scm[index + 3] != 0x07:
            break
        index += 5
        x, index = read_float(scm, index)
        y, index = read_float(scm, index)
        z, index = read_float(scm, index)
        if scm[index] < 0xCC:
            raise SystemExit(f"package {number} is missing its handle global")
        index += 2
        if scm[index : index + 3] != b"\x02\x00\x06":
            break
        index += 7
        if scm[index : index + 6] == b"\x08\x00\xce\x31\x07\x01":
            index += 6
        if x >= 630:
            island = "Portland"
        elif x <= -300:
            island = "Shoreside Vale"
        else:
            island = "Staunton Island"
        packages.append(
            {
                "n": number,
                "g": global_id,
                "x": round(x, 2),
                "y": round(y, 2),
                "z": round(z, 2),
                "u": (x - RADAR_MIN) / RADAR_SPAN,
                "v": (RADAR_MIN + RADAR_SPAN - y) / RADAR_SPAN,
                "island": island,
            }
        )
    if len(packages) != 100 or [item["g"] for item in packages] != list(range(11, 111)):
        raise SystemExit(f"expected globals $11..$110, parsed {len(packages)}")
    return packages


def unswizzle(src: bytes, row_stride: int, height: int) -> bytes:
    out = bytearray(row_stride * height)
    blocks = row_stride // 16
    cursor = 0
    for y in range(height):
        for x in range(row_stride):
            address = ((x // 16) + (y // 8) * blocks) * 128 + (x % 16) + (y % 8) * 16
            out[cursor] = src[address]
            cursor += 1
    return bytes(out)


def load_map_png(img: bytes) -> bytes:
    """Stitch radar00..radar63 out of GTA3PSPHR.IMG into one opaque PNG."""
    canvas = bytearray(MAP_PX * MAP_PX * 4)
    for pixel in range(0, len(canvas), 4):
        canvas[pixel : pixel + 4] = b"\xff\xff\xff\xff"

    for number in range(64):
        name = f"radar{number:02d}\x00".encode()
        name_at = img.find(name)
        if name_at < 0:
            continue
        window = img[name_at - 0x80 : name_at]
        rel = window.rfind(b"xet\x00")
        if rel < 0:
            continue
        base = name_at - (len(window) - rel)
        slot = struct.unpack_from("<I", img, base + 0x2C)[0]
        header = base + struct.unpack_from("<I", img, base + slot - 8)[0]
        raster = struct.unpack_from("<I", img, header + 4)[0]
        swizzle = struct.unpack_from("<H", img, header + 8)[0]
        width = 1 << img[header + 10]
        height = 1 << img[header + 11]
        bpp = img[header + 12]
        if (width, height, bpp) != (TILE, TILE, 4):
            continue
        row = (width * bpp) // 8
        size = row * height
        raw = img[base + raster : base + raster + size]
        linear = unswizzle(raw, row, height) if swizzle else raw
        palette = img[base + raster + size : base + raster + size + 64]
        if len(palette) < 64:
            continue
        tile_x, tile_y = number % TILES, number // TILES
        for y in range(TILE):
            for x in range(TILE):
                byte = linear[y * row + x // 2]
                color = (byte & 0x0F) if x % 2 == 0 else (byte >> 4)
                offset = (color * 4)
                red, green, blue = palette[offset : offset + 3]
                dest = ((tile_y * TILE + y) * MAP_PX + tile_x * TILE + x) * 4
                canvas[dest : dest + 4] = bytes((red, green, blue, 255))
    return png_rgba(MAP_PX, MAP_PX, canvas)


def png_rgba(width: int, height: int, rgba: bytes) -> bytes:
    def chunk(tag: bytes, payload: bytes) -> bytes:
        return struct.pack(">I", len(payload)) + tag + payload + struct.pack(">I", zlib.crc32(tag + payload) & 0xFFFFFFFF)

    rows = b"".join(b"\x00" + rgba[y * width * 4 : (y + 1) * width * 4] for y in range(height))
    header = struct.pack(">IIBBBBB", width, height, 8, 6, 0, 0, 0)
    return b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", header) + chunk(b"IDAT", zlib.compress(rows, 9)) + chunk(b"IEND", b"")


def read_save(path: Path) -> dict:
    """Return found flags for packages 1..100 and the ten reward milestones."""
    empty = {"found": [0] * 100, "milestones": [0] * 10, "count": 0, "ok": False, "error": "no save"}
    try:
        data = path.read_bytes()
    except OSError as exc:
        empty["error"] = str(exc)
        return empty
    script = data.find(b"SRPT")
    if script < 0:
        empty["error"] = "SRPT block not in this save"
        return empty
    scr = data.find(b"SCR\x00", script)
    if scr < 0:
        empty["error"] = "SCR block not in this save"
        return empty
    space = struct.unpack_from("<I", data, scr + 8)[0]
    base = scr + 12
    if base + space > len(data):
        empty["error"] = "script image is truncated"
        return empty

    def global_at(index: int) -> int:
        offset = base + index * 4
        if offset + 4 > base + space:
            return 0
        return struct.unpack_from("<i", data, offset)[0]

    found = [1 if global_at(10 + number) == 1 else 0 for number in range(1, 101)]
    milestones = [1 if global_at(110 + tier) == 1 else 0 for tier in range(1, 11)]
    return {
        "found": found,
        "milestones": milestones,
        "count": sum(found),
        "counter": global_at(561),
        "ok": True,
        "error": "",
    }


PAGE = r"""<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>LCS hidden packages</title>
<style>
  :root {
    --bg: #101218;
    --panel: #181b24;
    --line: #2c3140;
    --text: #e7e9f0;
    --muted: #9aa3b5;
    --miss: #ff5a4a;
    --have: #3ddc97;
    --local: #f0b429;
    --accent: #8eb6ff;
  }
  * { box-sizing: border-box; }
  html, body { margin: 0; height: 100%; background: var(--bg); color: var(--text); font: 14px/1.4 system-ui, sans-serif; }
  body { display: grid; grid-template-columns: 1fr 340px; height: 100vh; }
  #view { position: relative; overflow: hidden; background: #0c0e13; touch-action: none; cursor: grab; }
  #view.dragging { cursor: grabbing; }
  #map { position: absolute; top: 0; left: 0; width: 1024px; height: 1024px; transform-origin: 0 0; }
  #map img { width: 1024px; height: 1024px; image-rendering: pixelated; display: block; user-select: none; }
  .pin {
    position: absolute; left: 0; top: 0;
    width: 22px; height: 22px; margin: -11px 0 0 -11px;
    border-radius: 50%; border: 2px solid #111; color: white;
    font-size: 10px; font-weight: 700; display: grid; place-items: center;
    transform: scale(calc(1 / var(--s, 1)));
    cursor: pointer; user-select: none;
  }
  .pin.miss { background: var(--miss); }
  .pin.have { background: var(--have); color: #062216; }
  .pin.local { background: var(--local); color: #2a2108; }
  .pin.selected { outline: 2px solid white; outline-offset: 2px; z-index: 2; }
  .pin.hide-num { font-size: 0; width: 14px; height: 14px; margin: -7px 0 0 -7px; }
  #panel { display: flex; flex-direction: column; border-left: 1px solid var(--line); background: var(--panel); min-height: 0; }
  header { padding: 14px 16px 10px; border-bottom: 1px solid var(--line); }
  h1 { font-size: 16px; margin: 0 0 4px; font-weight: 650; }
  .count { font-size: 28px; font-weight: 700; letter-spacing: -0.03em; }
  .count span { color: var(--muted); font-weight: 500; font-size: 16px; }
  .bar { display: grid; grid-template-columns: repeat(10, 1fr); gap: 3px; margin-top: 8px; }
  .bar i { height: 8px; border-radius: 2px; background: #2a3040; display: block; }
  .bar i.on { background: var(--have); }
  .bar i.next { background: var(--local); }
  .sub { color: var(--muted); font-size: 12px; margin-top: 6px; }
  .tools { display: flex; gap: 6px; padding: 10px 16px; flex-wrap: wrap; }
  button, .tools label {
    background: #242938; color: var(--text); border: 1px solid var(--line);
    border-radius: 8px; padding: 5px 8px; font: inherit; cursor: pointer;
  }
  button.on, .tools label.on { border-color: var(--accent); color: var(--accent); }
  #list { overflow: auto; padding: 0 8px 12px; }
  .row {
    display: grid; grid-template-columns: 28px 36px 1fr auto; gap: 6px; align-items: center;
    padding: 6px 8px; border-radius: 8px; cursor: pointer;
  }
  .row:hover, .row.selected { background: #242938; }
  .row .n { font-variant-numeric: tabular-nums; font-weight: 650; }
  .row .where { color: var(--muted); font-size: 12px; }
  .tag { font-size: 11px; color: var(--muted); }
  .tag.have { color: var(--have); }
  .tag.local { color: var(--local); }
  #detail { padding: 12px 16px 16px; border-top: 1px solid var(--line); }
  #detail strong { font-size: 16px; }
  .coords { font-variant-numeric: tabular-nums; color: var(--muted); margin: 4px 0 8px; }
  .status { color: var(--muted); font-size: 12px; padding: 0 16px 12px; }
  #compass { position: absolute; top: 10px; left: 12px; z-index: 3; color: var(--muted); font-weight: 700; pointer-events: none; }
  @media (max-width: 860px) {
    body { grid-template-columns: 1fr; grid-template-rows: 55vh 45vh; }
    #panel { border-left: 0; border-top: 1px solid var(--line); }
  }
</style>
</head>
<body>
<div id="view">
  <div id="compass">N</div>
  <div id="map"></div>
</div>
<aside id="panel">
  <header>
    <h1>Hidden packages</h1>
    <div class="count" id="count">– <span>/ 100</span></div>
    <div class="bar" id="bar"></div>
    <div class="sub" id="reward"></div>
  </header>
  <div class="tools">
    <button id="missing-only" class="on" type="button">Missing</button>
    <button id="fit" type="button">Fit</button>
    <button id="numbers" class="on" type="button">Numbers</button>
    <button id="clear-local" type="button">Clear marks</button>
  </div>
  <div id="list"></div>
  <div id="detail">Select a package.</div>
  <div class="status" id="status"></div>
</aside>
<script id="packages" type="application/json">__PACKAGES__</script>
<script>
const packages = JSON.parse(document.getElementById("packages").textContent);
const REWARDS = __REWARDS__;
const map = document.getElementById("map");
const view = document.getElementById("view");
const list = document.getElementById("list");
let scale = 1, ox = 0, oy = 0;
const initial = __STATE__;
let saveFound = [0].concat(initial.found || []);
let milestones = initial.milestones || new Array(10).fill(0);
let local = loadLocal();
let missingOnly = true;
let showNumbers = true;
let selected = 0;
let saveLabel = "";

const img = document.createElement("img");
img.src = "/map.png";
img.alt = "Liberty City radar";
img.draggable = false;
map.appendChild(img);
const pins = new Map();
for (const pkg of packages) {
  const pin = document.createElement("div");
  pin.className = "pin miss";
  pin.style.left = (pkg.u * 100) + "%";
  pin.style.top = (pkg.v * 100) + "%";
  pin.textContent = pkg.n;
  pin.addEventListener("pointerdown", (event) => event.stopPropagation());
  pin.addEventListener("click", (event) => {
    event.stopPropagation();
    select(pkg.n, true);
  });
  map.appendChild(pin);
  pins.set(pkg.n, pin);
}

function loadLocal() {
  try { return new Set(JSON.parse(localStorage.getItem("lcs-hidden-local") || "[]")); }
  catch (error) { return new Set(); }
}
function storeLocal() {
  localStorage.setItem("lcs-hidden-local", JSON.stringify([...local].sort((a, b) => a - b)));
}
function stateOf(n) {
  if (saveFound[n]) return "have";
  if (local.has(n)) return "local";
  return "miss";
}
function applyView() {
  map.style.transform = `translate(${ox}px, ${oy}px) scale(${scale})`;
  map.style.setProperty("--s", String(scale));
}
function fit() {
  let minU = 1, minV = 1, maxU = 0, maxV = 0;
  for (const pkg of packages) {
    minU = Math.min(minU, pkg.u); maxU = Math.max(maxU, pkg.u);
    minV = Math.min(minV, pkg.v); maxV = Math.max(maxV, pkg.v);
  }
  const pad = 48;
  const width = Math.max(40, (maxU - minU) * 1024);
  const height = Math.max(40, (maxV - minV) * 1024);
  scale = Math.min((view.clientWidth - pad * 2) / width, (view.clientHeight - pad * 2) / height);
  scale = Math.max(0.35, Math.min(scale, 6));
  ox = view.clientWidth / 2 - ((minU + maxU) / 2) * 1024 * scale;
  oy = view.clientHeight / 2 - ((minV + maxV) / 2) * 1024 * scale;
  applyView();
}
function focus(pkg) {
  ox = view.clientWidth / 2 - pkg.u * 1024 * scale;
  oy = view.clientHeight / 2 - pkg.v * 1024 * scale;
  applyView();
}
function pkgByNumber(n) { return packages.find((pkg) => pkg.n === n); }

function render() {
  const foundCount = packages.filter((pkg) => stateOf(pkg.n) !== "miss").length;
  const saveCount = saveFound.reduce((sum, bit) => sum + bit, 0);
  document.getElementById("count").innerHTML = foundCount + " <span>/ 100</span>";
  const bar = document.getElementById("bar");
  bar.innerHTML = "";
  REWARDS.forEach((reward, index) => {
    const cell = document.createElement("i");
    const reached = foundCount >= reward[0];
    cell.className = milestones[index] || (saveCount >= reward[0]) ? "on" : reached ? "next" : "";
    cell.title = reward[0] + " · " + reward[1];
    bar.appendChild(cell);
  });
  const next = REWARDS.find((reward) => foundCount < reward[0]);
  document.getElementById("reward").textContent = next
    ? (next[0] - foundCount) + " more for " + next[1] + " (" + next[0] + ")"
    : "All 100 collected";
  for (const pkg of packages) {
    const pin = pins.get(pkg.n);
    const kind = stateOf(pkg.n);
    const visible = !missingOnly || kind === "miss";
    pin.className = "pin " + kind + (selected === pkg.n ? " selected" : "") + (showNumbers ? "" : " hide-num");
    pin.style.display = visible ? "" : "none";
    pin.textContent = showNumbers ? pkg.n : "";
  }
  const scroll = list.scrollTop;
  list.innerHTML = "";
  for (const pkg of packages) {
    const kind = stateOf(pkg.n);
    if (missingOnly && kind !== "miss") continue;
    const row = document.createElement("div");
    row.className = "row" + (selected === pkg.n ? " selected" : "");
    const tag = kind === "have" ? "in the save" : kind === "local" ? "marked here" : "missing";
    row.innerHTML = '<input type="checkbox"' + (kind !== "miss" ? " checked" : "") + (kind === "have" ? " disabled" : "") + '>'
      + '<div class="n">' + pkg.n + '</div>'
      + '<div class="where">' + pkg.island + '</div>'
      + '<div class="tag ' + kind + '">' + tag + '</div>';
    row.querySelector("input").addEventListener("click", (event) => {
      event.stopPropagation();
      if (saveFound[pkg.n]) return;
      if (local.has(pkg.n)) local.delete(pkg.n); else local.add(pkg.n);
      storeLocal();
      render();
    });
    row.addEventListener("click", () => select(pkg.n, true));
    list.appendChild(row);
  }
  list.scrollTop = scroll;
  const pkg = pkgByNumber(selected);
  const detail = document.getElementById("detail");
  if (!pkg) {
    detail.textContent = "Select a package.";
  } else {
    const kind = stateOf(pkg.n);
    const label = kind === "have" ? "In the save." : kind === "local" ? "Marked on this page. The save does not have it yet." : "Not found.";
    detail.innerHTML = "<strong>#" + pkg.n + " · " + pkg.island + "</strong>"
      + '<div class="coords">x ' + pkg.x.toFixed(2) + " &nbsp; y " + pkg.y.toFixed(2) + " &nbsp; z " + pkg.z.toFixed(2) + "</div>"
      + "<div>" + label + "</div>";
    if (kind !== "have") {
      const button = document.createElement("button");
      button.type = "button";
      button.style.marginTop = "8px";
      button.textContent = kind === "local" ? "Unmark" : "Mark as picked up";
      button.addEventListener("click", () => {
        if (local.has(pkg.n)) local.delete(pkg.n); else local.add(pkg.n);
        storeLocal();
        render();
      });
      detail.appendChild(button);
    }
  }
  document.getElementById("status").textContent = saveLabel;
}

function select(n, center) {
  selected = n;
  render();
  if (center) focus(pkgByNumber(n));
}

document.getElementById("missing-only").addEventListener("click", (event) => {
  missingOnly = !missingOnly;
  event.currentTarget.classList.toggle("on", missingOnly);
  event.currentTarget.textContent = missingOnly ? "Missing" : "All 100";
  render();
});
document.getElementById("numbers").addEventListener("click", (event) => {
  showNumbers = !showNumbers;
  event.currentTarget.classList.toggle("on", showNumbers);
  render();
});
document.getElementById("fit").addEventListener("click", fit);
document.getElementById("clear-local").addEventListener("click", () => {
  local.clear();
  storeLocal();
  render();
});

let drag = null;
view.addEventListener("pointerdown", (event) => {
  if (event.button !== 0) return;
  drag = { x: event.clientX, y: event.clientY, ox, oy };
  view.classList.add("dragging");
  view.setPointerCapture(event.pointerId);
});
view.addEventListener("pointermove", (event) => {
  if (!drag) return;
  ox = drag.ox + event.clientX - drag.x;
  oy = drag.oy + event.clientY - drag.y;
  applyView();
});
function endDrag() { drag = null; view.classList.remove("dragging"); }
view.addEventListener("pointerup", endDrag);
view.addEventListener("pointercancel", endDrag);
view.addEventListener("wheel", (event) => {
  event.preventDefault();
  const rect = view.getBoundingClientRect();
  const px = event.clientX - rect.left;
  const py = event.clientY - rect.top;
  const next = Math.max(0.35, Math.min(8, scale * (event.deltaY < 0 ? 1.12 : 1 / 1.12)));
  const factor = next / scale;
  ox = px - (px - ox) * factor;
  oy = py - (py - oy) * factor;
  scale = next;
  applyView();
}, { passive: false });

let lastKey = "";
async function poll() {
  try {
    const response = await fetch("/api/state", { cache: "no-store" });
    const body = await response.json();
    const key = JSON.stringify(body.found) + "|" + JSON.stringify(body.milestones) + "|" + body.mtime + "|" + body.ok;
    if (key === lastKey) return;
    lastKey = key;
    saveFound = [0].concat(body.found);
    milestones = body.milestones;
    let cleared = false;
    for (const pkg of packages) {
      if (saveFound[pkg.n] && local.delete(pkg.n)) cleared = true;
    }
    if (cleared) storeLocal();
    const when = body.mtime ? new Date(body.mtime * 1000).toLocaleString() : "unread";
    saveLabel = body.ok
      ? "Save has " + body.count + ". File time " + when + ". Marks in amber are only on this page."
      : "Could not read the save (" + body.error + ").";
    render();
  } catch (error) {
    saveLabel = "Lost contact with the map server.";
    render();
  }
}
fit();
render();
poll();
setInterval(poll, 2000);
</script>
</body>
</html>
"""


class Handler(BaseHTTPRequestHandler):
    server_version = "lcs-packages/1.0"

    def log_message(self, fmt: str, *args) -> None:
        return

    def do_GET(self) -> None:  # noqa: N802
        path = self.path.split("?", 1)[0]
        if path == "/":
            state = read_save(self.server.save_path)
            body = (
                PAGE.replace("__PACKAGES__", json.dumps(self.server.packages))
                .replace("__REWARDS__", json.dumps(REWARDS))
                .replace("__STATE__", json.dumps(state))
                .encode()
            )
            self._send(200, "text/html; charset=utf-8", body)
        elif path == "/map.png":
            self._send(200, "image/png", self.server.map_png)
        elif path == "/api/state":
            state = read_save(self.server.save_path)
            try:
                state["mtime"] = self.server.save_path.stat().st_mtime
            except OSError:
                state["mtime"] = 0
            state["save"] = str(self.server.save_path)
            self._send(200, "application/json", json.dumps(state).encode())
        else:
            self._send(404, "text/plain", b"not found")

    def _send(self, status: int, content_type: str, body: bytes) -> None:
        self.send_response(status)
        self.send_header("Content-Type", content_type)
        self.send_header("Content-Length", str(len(body)))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        try:
            self.wfile.write(body)
        except (BrokenPipeError, ConnectionResetError):
            return


def main() -> None:
    parser = argparse.ArgumentParser(description="Serve the hidden-package map on localhost.")
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=8765)
    parser.add_argument("--save", type=Path, default=DEFAULT_SAVE)
    args = parser.parse_args()

    packages = load_packages(SCM_PATH.read_bytes())
    print(f"parsed {len(packages)} packages from {SCM_PATH.name}")
    map_png = load_map_png(IMG_PATH.read_bytes())
    print(f"radar map {MAP_PX}x{MAP_PX}, {len(map_png)} bytes")
    state = read_save(args.save)
    if state["ok"]:
        print(f"save {args.save}: {state['count']} found, milestones {state['milestones']}")
    else:
        print(f"save {args.save}: {state['error']}")

    httpd = ThreadingHTTPServer((args.host, args.port), Handler)
    httpd.packages = packages
    httpd.map_png = map_png
    httpd.save_path = args.save
    url = f"http://{args.host}:{args.port}/"
    print(f"open {url}")
    try:
        httpd.serve_forever()
    except KeyboardInterrupt:
        print()


if __name__ == "__main__":
    main()
