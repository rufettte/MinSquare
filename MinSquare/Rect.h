#ifndef RECT_H
#define RECT_H

#include "Coordinate.h"
/*
	Rectangular object:
		id - represents the rectangle.
		w,h  - stand for width and height, respectively.
		topLeft, bottomRight - coordinates, where the rectangle's top left and right bottom points stand.
		setPlacement() - sets the top left and right bottom coordinates.

		Note that the coordinate system is based on the image coordinate system, where x and y values increase
		towards bottom right.

		E.g.,
		(0,0)# # # # # # #
			#
			#
			#
			#
*/
class Rect {
	private:
		int id, w, h;
		Coordinate topLeft;
		Coordinate bottomRight;

	public:
		Rect(int id, int w, int h);
		int getId();
		int getW();
		void setW(int w);
		int getH();
		void setH(int h);
		Coordinate getTopLeft();
		Coordinate getBottomRight();
		void setPlacement(Coordinate topLeft);
};
#endif