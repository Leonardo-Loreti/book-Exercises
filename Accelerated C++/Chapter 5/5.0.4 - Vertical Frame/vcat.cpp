#include <iostream>
#include <vector>

using std::vector;
using std::string;

vector<string> vcat(const vector<string>& top, const vector<string>& bottom){

    vector<string> ret = top;

    for(vector<string>::const_iterator iter = bottom.begin(); iter != bottom.end(); ++iter){
        ret.push_back(*iter);
    }

    //this command has the same effect.
    //ret.insert( ret.end(), bottom.begin(), bottom.end());

    return ret;
}
