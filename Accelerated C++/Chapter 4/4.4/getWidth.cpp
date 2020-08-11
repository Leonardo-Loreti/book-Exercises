#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int getWidth(int);

double getWidthDecimal(double n){

    double nDecimal;
    double integer;
    double length=0;

    //This was the only way I found to compute how many decimal numbers were in the increment.
    //In fact, it's an appropriate way to do this, but way to more advanced tool than the ones
    //we saw in this chapter.
    while((nDecimal = std::modf(n, &integer)) != 0){
        n*=10;
        length++;
    }

    return length;
}

//There's a slight difference betweem this function and the other "getWidth" from the exercise 4.3.
//In this case, we need to get only the quantity of integer numbers of the variable last, because
//afterwards, we'll sum this quantity with the quantity of decimals on the increment.
double getWidth(double n){
    int length = 0;

    while( int(n) != 0){
        n/=10;
        length++;
    }
    return length;
}
