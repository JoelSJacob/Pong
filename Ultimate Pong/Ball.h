#pragma once
#include <GL/glew.h>
#include <GL/glut.h>

class Ball {

private:
	GLfloat bufferData[720]; // 360 points, 1 point = [ x, y, ...otherPoints ]

public:
	Ball();
	void move();
	GLfloat* getBufferData();
};