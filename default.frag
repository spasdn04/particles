#version 330 core

// Outputs colors in RGBA
out vec4 FragColor;

// Imports the color from the Vertex Shader
in vec3 color;

void main(){
	// outputs final color
	FragColor = vec4(color, 1.0);
}