#include <iostream>
#include "Square.h"
#include "Utils.h"
using namespace std;

bool Square::isOverlap(Rect a, Rect b) {
	if (a.getBottomRight().getY() <= b.getTopLeft().getY() || a.getTopLeft().getY() >= b.getBottomRight().getY())
		return false;
	if (a.getBottomRight().getX() <= b.getTopLeft().getX() || a.getTopLeft().getX() >= b.getBottomRight().getX())
		return false;
	return true;
}

void Square::start(vector<Rect> rects)
{
	vector<Rect> sorted_recs = Utils::quickSort(rects);
	this->placedRects.push_back(sorted_recs[0]);
	for (unsigned int i = 1; i < sorted_recs.size(); i++) {
		vector<Rect> temp;
		for (unsigned int j = 0; j < this->placedRects.size(); j++) {
			Rect rect = sorted_recs[i];
			Coordinate rtl = Coordinate(Coordinate(this->placedRects[j].getBottomRight().getX(), this->placedRects[j].getTopLeft().getY()));
			rect.setPlacement(rtl);
			if (!checkIntersection(rect))
				temp.push_back(rect);
			Coordinate btl = Coordinate(Coordinate(this->placedRects[j].getTopLeft().getX(), this->placedRects[j].getBottomRight().getY()));
			rect.setPlacement(btl);
			if (!checkIntersection(rect))
				temp.push_back(rect);
		}
		addToOptimalPlace(temp);
	}
}

int Square::calculateSize()
{
	int MAX = INT_MIN;
	for (int i = 0; i < this->placedRects.size(); i++) {
		int tmp_max = max(this->placedRects[i].getBottomRight().getX(), this->placedRects[i].getBottomRight().getY());
		if (tmp_max > MAX)
			MAX = tmp_max;
	}
	return MAX;
}

bool Square::checkIntersection(Rect tmp) {
	for (unsigned int i = 0; i < this->placedRects.size(); i++) {
		if (isOverlap(tmp, this->placedRects[i]))
			return true;
	}
	return false;
}

void Square::addToOptimalPlace(vector<Rect> temp) {
	int index = -1;
	int MIN = INT_MAX;
	for (unsigned int i = 0; i < temp.size(); i++) {
		this->placedRects.push_back(temp[i]);
		int SIZE = calculateSize();
		if (MIN > SIZE) {
			MIN = SIZE;
			index = i;
		}
		this->placedRects.erase(this->placedRects.begin() + this->placedRects.size()-1);
	}
	this->placedRects.push_back(temp[index]);
}

void Square::print()
{
	cout << "Minimum square size is: " << calculateSize() << endl;
	for (unsigned int i = 0; i < this->placedRects.size(); i++) {
		cout << "Rect " << this->placedRects[i].getId() << ": ";
		cout << "(" << this->placedRects[i].getTopLeft().getX() << ", " << this->placedRects[i].getTopLeft().getY() << ") -> ";
		cout << "(" << this->placedRects[i].getBottomRight().getX() << ", " << this->placedRects[i].getBottomRight().getY() << ")" << endl;
	}
}
