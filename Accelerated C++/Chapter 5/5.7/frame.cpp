#include <iostream>
#include <vector>
#include "width.h"

using std::vector;
using std::string;

void frame(vector<string>& v){

    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');

    ret.push_back(border);

    for(vector<string>::size_type i = 0; i != v.size(); ++i){
        ret.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *");
    }

    ret.push_back(border);
    v = ret;
}
