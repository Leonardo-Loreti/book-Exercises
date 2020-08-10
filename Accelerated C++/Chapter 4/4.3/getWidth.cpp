#include <iostream>

using std::cout;
using std::endl;

int getWidth(int n){
    int length = 0;

    while( n != 0){
        n/=10;
        length++;
    }
    return length;
}
