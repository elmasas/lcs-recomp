#version 450
// Packed PSP world vertex (vtype 0x000115, 10 bytes). The CPU copies the
// original bytes; this shader matches the DirectX packed path.
// Clip-space Y is flipped at the end so the frame matches ge.vert.
layout(location = 0) in uvec2 inUv8;
layout(location = 1) in uint inColor5551;
layout(location = 2) in int inX;
layout(location = 3) in int inY;
layout(location = 4) in int inZ;

layout(location = 0) out vec4 vColor;
layout(location = 1) out vec2 vUv;
layout(location = 2) out float vQ;
layout(location = 3) out float vFog;

layout(std140, set = 0, binding = 0) uniform DrawUniforms {
    vec4 row0;
    vec4 row1;
    vec4 row2;
    vec4 row3;
    vec4 viewZ;
    vec4 uvScaleOffset;
    vec4 fogParameters;
    uvec4 control;
    vec4 colorMul;
    vec4 colorAdd;
    uvec4 pixel0;
    uvec4 pixel1;
} u;

float expand5(uint value) {
    value &= 31u;
    uint expanded = (value << 3u) | (value >> 2u);
    return float(expanded) * (1.0 / 255.0);
}

void main() {
    vec4 p = vec4(vec3(float(inX), float(inY), float(inZ)) * (1.0 / 32768.0), 1.0);
    float clipW = dot(u.row3, p);
    if (abs(clipW) < 1.0e-12) clipW = 1.0;
    float clipZ = dot(u.row2, p);
    if (u.control.y == 0u) clipZ = clamp(clipZ, 0.0, clipW);
    vec4 position = vec4(dot(u.row0, p), dot(u.row1, p), clipZ, clipW);
    vec2 rawUv = vec2(inUv8) * (1.0 / 128.0);
    vec2 uv = rawUv * u.uvScaleOffset.xy + u.uvScaleOffset.zw;
    float viewZ = dot(u.viewZ, p);
    float fog = clamp((viewZ + u.fogParameters.x) * u.fogParameters.y, 0.0, 1.0);
    uint packed = inColor5551;
    vec4 color = vec4(
        expand5(packed),
        expand5(packed >> 5u),
        expand5(packed >> 10u),
        (packed & 0x8000u) != 0u ? 1.0 : 0.0);
    if (u.control.z != 0u) {
        vec4 lit = clamp(color * u.colorMul + u.colorAdd, 0.0, 1.0);
        color = floor(lit * 255.0) * (1.0 / 255.0);
    }
    position.y = -position.y;
    gl_Position = position;
    vColor = color;
    vUv = uv;
    vQ = 1.0;
    vFog = fog;
}
