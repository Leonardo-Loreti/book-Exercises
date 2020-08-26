#include <iostream>
#include <list>
#include "verificationAscOrDesc.h"

using std::list;
using std::string;

list<string> verificationAscOrDesc(list<string>& l){

    list<string> n;
    list<string>::iterator iter = l.begin();

    while(iter != l.end()){

        if(ascOrDesc(*iter)){
            ++iter;
        }else{
            n.push_back(*iter);
            iter = l.erase(iter);
        }
    }
    return n;
}

bool ascOrDesc(const string& s){
    for(string::size_type i = 0; i != s.size(); ++i){
        if(s[i] == 'b' ||
           s[i] == 'd' ||
           s[i] == 'f' ||
           s[i] == 'h' ||
           s[i] == 'k' ||
           s[i] == 'l' ||
           s[i] == 't' ||
           s[i] == 'g' ||
           s[i] == 'j' ||
           s[i] == 'p' ||
           s[i] == 'q' ||
           s[i] == 'y'   ){
                return true;
        }
    }
    return false;
}
