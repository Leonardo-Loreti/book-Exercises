#include <iostream>
#include <iomanip>
#include "getWidth.h"

using std::cout;
using std::endl;
using std::cin;

//Obviusly, this program doesn't covers all the possible cases.

int main(){

    cout << "Please, type the initial value, the last one, and the increment rate: ";
    double initial;
    double last;
    double increment;
    cin >> initial >> last >> increment;

    int length1 = getWidthDecimal(increment);
    int length2 = getWidth(last);
    int length = length1 + length2;

    //cout << std::setw(length+3) << std::left << "Value" << "Square" << endl;

    for(initial; initial <= last; initial+=increment){
        cout << std::setw(length+3) << std::left << initial << initial*initial << endl;
    }
}
