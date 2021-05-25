#ifndef COORDINATE_H
#define COORDINATE_H
/*
	2D Coordinate that holds x and y values.
*/
class Coordinate {
	private:
		int x;
		int y;
	
	public:
		Coordinate();
		Coordinate(int x, int y);
		int getX();
		void setX(int x);
		int getY();
		void setY(int y);
};
#endif