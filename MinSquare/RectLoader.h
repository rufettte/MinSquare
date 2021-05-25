#include <vector>
#include <string>
#include "Rect.h"
using namespace std;

/*
    Loads the rectangles from a text file, whose full path is provided by the user in the command arguments.
*/
class RectLoader
{
    private:
        string filePath;

    public:
        RectLoader(const string& filePath);
        vector<Rect> load();
};
