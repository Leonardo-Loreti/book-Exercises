#include <iostream>
#include <vector>
#include "average.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::domain_error;

int main(){
    double x, avg;
    vector<double> numbers;

    while(cin >> x){
        numbers.push_back(x);
    }

    try{
        avg = average(numbers);
        cout << "Average: " << avg << endl;
    }
    catch(domain_error e){
        cout << e.what() << endl;
    }
}
