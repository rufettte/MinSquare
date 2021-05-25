#include "ErrorMessage.h"
#include <iostream>
using namespace std;

void ErrorMessage::zeroSize() {
    cout << "An error occured. Please refer to the possible reason(s) listed below:" << endl;
    cout << "1) The input file is out of input structure (id w h)." << endl;
    cout << "2) There is no any rectangle." << endl;
    cout << "3) No such file or directory." << endl;
}

void ErrorMessage::inputFailure() {
    cout << "Please, write the path to the input.txt file" << endl;
}