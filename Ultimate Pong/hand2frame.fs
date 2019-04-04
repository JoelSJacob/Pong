#version 330 core

// Ouput data
out vec3 color;
uniform float framecolor;

void main()
{
	//Black
	color = vec3(0,framecolor,0);

}
