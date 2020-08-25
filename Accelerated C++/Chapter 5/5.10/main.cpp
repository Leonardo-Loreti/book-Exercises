#include <iostream>
#include <list>
#include "verification.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::list;

int main(){

    list<string> palindrome;
    string s, longest;

    while(cin >> s){
        palindrome.push_back(s);
    }

    longest = verification(palindrome);

    cout << "\nPalindrome words:" << endl;

    for(list<string>::const_iterator iter = palindrome.begin(); iter != palindrome.end(); ++iter){
        cout << *iter << endl;
    }

    cout << "\nLongest one:" << longest << endl;

}
