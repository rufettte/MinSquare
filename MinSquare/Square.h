#include <vector>
#include "Rect.h"
using namespace std;

/*
	Square class plays the significant role on placing rectangles within square with minimum size.

	placedRects: As a rectangle is placed, it is immediately added to this list.

	start(): is responsible from the whole process.
	calculateSize(): eventually calculates the size of the square
	isOverlap(): computes if two given rectangles are overlapping
	checkIntersection(): computes if the given rectangle (tmp) intersects with the already placed rectangles (in placedRects)
					     Note that this function uses isOverlap() for each pair of rectangles that are about to be checked for the intersection.
	addToOptimalPlace(): takes all possibilities that a rectangle can be placed and selects the optimal one and adds it to that place. 
	print() : prints the final result.
			  the arrangement of each rectangle is defined as:
			  Rect "id": topLeft -> rightBottom
*/
class Square {
	private:
		vector<Rect> placedRects;
	
	public:
		bool isOverlap(Rect a, Rect b);
		void start(vector<Rect> rects);
		int calculateSize();
		bool checkIntersection(Rect tmp);
		void addToOptimalPlace(vector<Rect> temp);
		void print();
};