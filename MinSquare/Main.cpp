#include <vector>
#include "Rect.h"
#include "RectLoader.h"
#include "Square.h"
#include "ErrorMessage.h"
using namespace std;

void main(int argc, char** argv)
{
    if (argc < 2) {
        ErrorMessage::inputFailure();
        return;
    }

    RectLoader rectLoader = RectLoader(argv[1]);
    vector<Rect> rects = rectLoader.load();
    
    if (rects.size() == 0) {
        ErrorMessage::zeroSize();
        return;
    }
    
    Square square = Square();
    square.start(rects);
    square.print(); 
}