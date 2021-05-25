#include "Coordinate.h"

Coordinate::Coordinate()
{
	this->x = 0;
	this->y = 0;
}

Coordinate::Coordinate(int x, int y) {
	this->x = x;
	this->y = y;
}

int Coordinate::getX() {
	return this->x;
}

void Coordinate::setX(int x) {
	this->x = x;
}

int Coordinate::getY() {
	return this->y;
}

void Coordinate::setY(int x) {
	this->y = y;
}