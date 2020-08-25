#include <iostream>
#include <list>
#include <algorithm>
#include <cctype>

using std::string;
using std::reverse;
using std::list;

string verification(list<string>& palindrome){

    string longest;

    for(list<string>::iterator iter = palindrome.begin(); iter != palindrome.end(); ++iter){

        if(isItPalindrome(*iter)){
            //compute the longest
            if(longest.lenght() < iter->lenght()){
                longest = *iter;
            }
        }else{
            iter = palindrome.erase(iter);
        }
    }
    return longest;
}

bool isItPalidrome(const string& s){

    string s1 = toLower(s);

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
