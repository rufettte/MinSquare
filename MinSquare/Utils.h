#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include "Rect.h"


/*
	This class plays a helper role.
	
	* quickSort() -> Sorts the rectangles w.r.t both the width (first priority) and height (second priority) values.
	* isGreater() -> Helps to compare two given rectangles.
*/
class Utils {
	public:
		std::vector<Rect> static quickSort(std::vector<Rect> rects);
		bool static isGreater(Rect a, Rect b);
};
#endif 