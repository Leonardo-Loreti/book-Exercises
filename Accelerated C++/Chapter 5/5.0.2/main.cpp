#include <iostream>
#include <vector>
#include "split.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main(){
    vector<string> v;
    string s;

    while(getline(cin, s)){
        vector<string> v = split(s);

        for(vector<string>::size_type i = 0; i != v.size(); ++i){
            cout << v[i] << endl;
        }
    }
}
