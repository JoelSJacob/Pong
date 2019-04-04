#pragma once
#include <GL/glew.h>
#include <GL/glut.h>

class Ball {

private:
	GLfloat bufferData[360];
	bool arrowKeys;

public:
	Ball();
	void move();
	GLfloat* getBufferData();
};