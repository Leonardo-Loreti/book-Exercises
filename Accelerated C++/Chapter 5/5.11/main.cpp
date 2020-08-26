#include <iostream>
#include <list>
#include "verificationAscOrDesc.h"
#include "longest.h"

using std::cout;
using std::endl;
using std::cin;
using std::list;
using std::string;

int main(){

    list<string> ascOrDesc;
    list<string> nor;

    string s, longestWord;

    while(cin >> s){
        ascOrDesc.push_back(s);
    }

    nor = verificationAscOrDesc(ascOrDesc);

    longestWord = longest(nor);

    cout << "Ascenders or descenders words:" << endl;

    list<string>::iterator iter = ascOrDesc.begin();

    for(iter; iter != ascOrDesc.end(); ++iter){
        cout << *iter << endl;
    }

    cout << "\nNeither ascenders nor descenders words:" << endl;

    for(iter = nor.begin(); iter != nor.end(); ++iter){
        cout << *iter << endl;
    }

    cout << "Which the longest word is: " << longestWord << endl;

}
