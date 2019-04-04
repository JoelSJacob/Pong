#include "Ball.h";
#include <glm\glm.hpp>
#include <iostream>

Ball::Ball() {
	// Generate ball vertexes
	GLfloat RADIUS = 0.9f;
	const float PI = 3.141592653589793238463;
	for (int i = 0; i < 360; i++) {
		float angle = 2.0 * PI * float(i) / 360.0;
		GLfloat x = cos(angle) * RADIUS;
		GLfloat y = sin(angle) * RADIUS;
		bufferData[i * 2] = x;		// if i = 1, bufferData[2] = x
		bufferData[i * 2 + 1] = y;	// if i = 1, bufferData[3] = y

		std::cout << i << " (" << x << ", " << y << ")" << std::endl;
	}
}

void Ball::move() {
	// TODO
}

GLfloat* Ball::getBufferData() {
	return bufferData;
}