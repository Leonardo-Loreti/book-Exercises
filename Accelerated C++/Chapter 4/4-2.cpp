#include <iostream>
#include <iomanip> //std::setw(n);

using std::cout;
using std::cin;
using std::endl;

int main(){

    cout.width(7);
    cout << std::left << "Value" << "Square" << endl;

    for(int i = 0 ; i != 101; i++){
        cout << std::setw(7);
        cout << std::left << i << i*i << endl;
    }
}
