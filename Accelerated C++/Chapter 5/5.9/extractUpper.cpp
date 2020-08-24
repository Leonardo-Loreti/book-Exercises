#include <iostream>
#include <list>
#include <cctype>
#include "extractUpper.h"

using std::list;
using std::string;
using std::isupper;

list<string> extractUpper(list<string>& lower){

    list<string> upper;
    list<string>::iterator iter = lower.begin();

    while(iter != lower.end()){
        if(isItUpper(*iter)){
            upper.push_back(*iter);
            iter = lower.erase(iter);
        }else{
            ++iter;
        }
    }
    return upper;
}

bool isItUpper(const string& s){

    string::size_type i = 0;

    while(i != s.size()){
        if(isupper(s[i])){
            return true;
        }else{
            ++i;
        }
    }
    return false;
}
