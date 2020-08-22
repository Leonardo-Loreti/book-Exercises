#include <iostream>
#include <vector>
#include "frame.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;
using std::vector;

int main(){

    string s;
    vector<string> v;

    while(getline(cin, s)){
        v.push_back(s);
    }

    frame(v);

    for(vector<string>::size_type i = 0; i != v.size(); ++i){
        cout << v[i] << endl;
    }
}
