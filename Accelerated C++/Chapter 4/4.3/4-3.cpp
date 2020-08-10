#include <iostream>
#include <iomanip> //std::setw(n);
#include "getWidth.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    //In this solution we need to set manually the maximum number we
    //want to calculate the square. It simply adjusts the width of the
    //stream automatically.
    int length = getWidth(1000);

    cout.width(length+3);
    cout << std::left << "Value" << "Square" << endl;

    for(int i = 0 ; i != 1000; i++){
        cout << std::setw(length+3);
        cout << std::left << i << i*i << endl;
    }
}
