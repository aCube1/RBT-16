#version 410 core

in vec3 a_pos;
in vec2 a_uv;
in vec4 a_color;

out vec4 f_color;
out vec2 f_uv;

void main() {
    f_color = a_color;
    f_uv = a_uv;

    gl_Position = vec4(a_pos, 1.0);
}
