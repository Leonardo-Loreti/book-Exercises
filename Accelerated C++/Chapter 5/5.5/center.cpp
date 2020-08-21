#include <iostream>
#include <vector>
#include <iomanip>
#include "takeMaxlen.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::setw;

void center(const vector<string>& vec){

    string::size_type maxlen = 0;
    maxlen = takeMaxlen(vec);

    if(maxlen % 2 == 0){
        for(vector<string>::size_type i = 0; i != vec.size(); ++i){
            if(vec[i].size() % 2 == 0){
                cout << setw(maxlen/2 + vec[i].size()/2) << vec[i] << endl;
            }else{
                cout << setw(maxlen/2 + vec[i].size()/2 + 1) << vec[i] << endl;
            }
        }
    }else{
        for(vector<string>::size_type i = 0; i != vec.size(); ++i){
            cout << setw(maxlen/2 + vec[i].size()/2 + 1) << vec[i] << endl;
        }
    }
}
