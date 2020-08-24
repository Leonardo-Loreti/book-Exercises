#include <iostream>
#include <vector>
#include "hcat.h"
#include "frame.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main(){

    vector<string> v;
    string s;

    while(getline(cin, s)){
        v.push_back(s);
    }

    v = hcat(v,frame(v));

    for(vector<string>::size_type i = 0; i != v.size(); ++i){
        cout << v[i] << endl;
    }
}
