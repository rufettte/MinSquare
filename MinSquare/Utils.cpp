#include "Utils.h"



vector<Rect> Utils::quickSort(vector<Rect> rects) {	
	if (rects.size() == 0 || rects.size() == 1)
		return rects;
	vector<Rect> left;
	vector<Rect> right;
	Rect pivot = rects[0];
	for (int i = 1; i < rects.size(); i++) {
		if (!Utils::isGreater(pivot, rects[i]))
			left.push_back(rects[i]);
		else
			right.push_back(rects[i]);
	}
	vector<Rect> sorted_left = quickSort(left);
	vector<Rect> sorted_right = quickSort(right);
	vector<Rect> sorted_recs = sorted_left;
	sorted_recs.push_back(pivot);
	sorted_recs.insert(sorted_recs.end(), sorted_right.begin(), sorted_right.end());
	return  sorted_recs;
}


bool Utils::isGreater(Rect a, Rect b)
{
	if (a.getW() > b.getW())
		return true;
	else if (a.getW() == b.getW() && a.getH() > b.getH())
		return true;
	else return false;
}
