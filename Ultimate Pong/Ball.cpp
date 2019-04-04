#include "Ball.h";
#include <glm\glm.hpp>

Ball::Ball() {
	// Generate ball vertexes
	float RADIUS = 1.0;
	for (int i = 0; i < sizeof(bufferData); i++) {
		float angle = i / float(sizeof(bufferData));
		float x = abs(cos(angle) * RADIUS);
		float y = abs(sin(angle) * RADIUS);
		bufferData[i * 2] = x;		// if i = 1, bufferData[2] = x
		bufferData[i * 2 + 1] = y;	// if i = 1, bufferData[3] = y
	}
}

void Ball::move() {
	// TODO
}

GLfloat* Ball::getBufferData() {
	return bufferData;
}