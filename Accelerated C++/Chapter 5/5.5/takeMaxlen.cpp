#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::max;

string::size_type takeMaxlen(const vector<string>& vec){

    string::size_type maxlen = 0;

    for(vector<string>::size_type i = 0; i != vec.size(); ++i){
        maxlen = max(maxlen, vec[i].size());
    }

    return maxlen;
}
