#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>


using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::setprecision;
using std::streamsize;

int main(){

    cout << "This program returns the quartiles of a sequence of integer numbers!" << endl;
    getchar();
    system("clear");

    vector<double> numbers;
    int x;
    double q1, q2, q3;

    cout << "Please, digit the sequence of numbers, followed by end-of-file: ";

    while(cin >> x){
        numbers.push_back(x);
    }
    cout << endl;

    sort(numbers.begin(), numbers.end());

    typedef vector<double>::size_type vec_sz;
    vec_sz size = numbers.size();
    vec_sz size2;

    if(size == 0){
        cout << "You must enter some number." << endl;
        return 1;
    }else if(size == 1){
        cout << "There's no median, just one value: " << numbers[0] << endl;
        return 0;
    }else if(size == 2){
        q2 = (numbers[1]+numbers[0])/2;
        cout << "Q1: " << numbers[0] << endl;
        cout << "Q2: " << q2 << endl;
        cout << "Q3: " << numbers[1] << endl;
        return 0;
    }else if(size == 3){
        cout << "Q1: " << numbers[0] << endl;
        cout << "Q2: " << numbers[1] << endl;
        cout << "Q3: " << numbers[2] << endl;
        return 0;
    }else{
        if(size % 2 == 0){
            q2 = (numbers[size/2 - 1] + numbers[size/2])/2;
            size2 = size/2;
                if(size2 % 2 == 0){
                    q1 = (numbers[size2/2 - 1] + numbers[size2/2])/2;
                    q3 = (numbers[(size/2) + size2/2 - 1] + numbers[(size/2) + size2/2])/2;
                }else{
                    q1 = numbers[size2/2];
                    q3 = numbers[size/2 + size2/2];
                }
        }else{
            q2 = numbers[size/2];
            size2 = size/2;
                if(size2 % 2 == 0){
                    q1 = (numbers[size2/2 - 1] + numbers[size2/2])/2;
                    q3 = (numbers[size/2 + size2/2] + numbers[size/2 + size2/2 + 1])/2;
                }else{
                    q1 = (numbers[size2/2]);
                    q3 = (numbers[size/2 + size2/2 + 1]);
                }
        }
    }
    cout << "Q1: " << q1 << endl;
    cout << "Q2: " << q2 << endl;
    cout << "Q3: " << q3 << endl;
}
