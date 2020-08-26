#include <iostream>
#include <list>

using std::list;
using std::string;

string longest(const list<string>& n){

    list<string>::const_iterator iter = n.begin();
    string s;

    for(iter; iter != n.end(); ++iter){
        if(s.size() < iter->size()){
            s = *iter;
        }
    }
    return s;
}
