#version 330 core

layout (location 0) in vec2 aPos;
layout (location 1) in vec4 aColor;

// Outputs the color for the Fragment Shader
out vec3 color;

void main(){
	// Outputs the positions/coordinates of all vertices
	gl_Position = vec3(aPos.x, aPos.y, aPosz);

	// Assigns the colors from the Vertex Data to "color"
	color = aColor;
}