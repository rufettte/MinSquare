#include <vector>
#include "Rect.h"
using namespace std;

/*
	This class plays a helper role.
	
	* quickSort() -> Sorts the rectangles w.r.t both the width (first priority) and height (second priority) values.
	* isGreater() -> Helps to compare two given rectangles.
*/
class Utils {
	public:
		vector<Rect> static quickSort(vector<Rect> rects);
		bool static isGreater(Rect a, Rect b);
};
