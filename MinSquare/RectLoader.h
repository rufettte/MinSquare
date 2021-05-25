#ifndef RECTLOADER_H
#define RECTLOADER_H

#include <vector>
#include <string>
#include "Rect.h"

/*
    Loads the rectangles from a text file, whose full path is provided by the user in the command arguments.
*/
class RectLoader
{
    private:
        std::string filePath;

    public:
        RectLoader(const std::string& filePath);
        std::vector<Rect> load();
};
#endif