#include <iostream>
#include <list>
#include <algorithm>
#include <cctype>
#include "verification.h"

using std::string;
using std::reverse;
using std::list;

string verification(list<string>& palindrome){

    string longest;
    list<string>::iterator iter = palindrome.begin();

    while(iter != palindrome.end()){

        if(isItPalindrome(*iter)){
            //compute the longest
            if(longest.length() < iter->length()){
                longest = *iter;
            }
        ++iter;
        }else{
            iter = palindrome.erase(iter);
        }
    }
    return longest;
}

bool isItPalindrome(string s){

    s = toLower(s);
    string s1 = s;

    reverse(s1.begin(), s1.end());

    if(s == s1){
        return true;
    }
    return false;
}

string toLower(string s){

    for(string::size_type i = 0; i != s.size(); ++i){
        s[i] = tolower(s[i]);
    }
    return s;
}
