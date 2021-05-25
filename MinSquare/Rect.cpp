#include "Rect.h"

Rect::Rect(int id, int w, int h) {
	this->id = id;
	this->w = w;
	this->h = h;
	this->topLeft = Coordinate(0, 0);
	this->bottomRight = Coordinate(this->w, this->h);
}

int Rect::getId()
{
	return this->id;
}

int Rect::getW() {
	return this->w;
}


void Rect::setW(int w) {
	this->w = w;
}

int Rect::getH() {
	return this->h;
}

void Rect::setH(int h) {
	this->h = h;
}

Coordinate Rect::getTopLeft() {
	return this->topLeft;
}

Coordinate Rect::getBottomRight() {
	return this->bottomRight;
}

void Rect::setPlacement(Coordinate topLeft) {
	this->topLeft = topLeft;
	this->bottomRight = Coordinate(this->topLeft.getX() + this->getW(), this->topLeft.getY() + this->getH());
}