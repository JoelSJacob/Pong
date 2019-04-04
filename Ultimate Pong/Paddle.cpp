#include "Paddle.h";

Paddle::Paddle(bool isArrowKeys) {
	bl[0] = isArrowKeys ? -0.5 : -0.1;
	bl[1] = isArrowKeys ? 0.5 : -0.1;
	br[0] = isArrowKeys ? 0.5 : -0.1;
	br[1] = isArrowKeys ? 0.5 : -0.1;
	tl[0] = isArrowKeys ? 0.5 : -0.1;
	tl[1] = isArrowKeys ? -0.5 : 0.1;
	tr[0] = isArrowKeys ? -0.5 : -0.1;
	tr[1] = isArrowKeys ? -0.5 : 0.1;
	bufferData[0] = bl[0];
	bufferData[1] = bl[1];
	bufferData[2] = br[0];
	bufferData[3] = br[1];
	bufferData[4] = tl[0];
	bufferData[5] = tl[1];
	bufferData[6] = tr[0];
	bufferData[7] = tr[1];
	arrowKeys = isArrowKeys;
}

void Paddle::moveUp() {
	// TODO
}

void Paddle::moveDown() {
	// TODO
}

bool Paddle::isUsingArrowKeys() {
	return arrowKeys;
}

GLfloat* Paddle::getBufferData() {
	return bufferData;
}