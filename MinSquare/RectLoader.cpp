#include "RectLoader.h"
#include <fstream>
#include <iostream>
using namespace std;

RectLoader::RectLoader(const string& filePath)
{ 
	this->filePath = filePath;
}

vector<Rect> RectLoader::load() 
{
	vector<Rect> rectangulars;
	ifstream infile(this->filePath);
	int id, w, h;
	while (infile >> id >> w >> h)
		rectangulars.push_back(Rect(id, w, h));
	return rectangulars;
}
