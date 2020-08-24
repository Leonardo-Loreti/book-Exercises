#include <iostream>
#include <list>
#include "extractUpper.h"

using std::cout;
using std::endl;
using std::cin;
using std::list;
using std::string;

int main(){

    list<string> upperCase;
    list<string> lowerCase;
    string s;

    while(cin >> s){
        lowerCase.push_back(s);
    }

    upperCase = extractUpper(lowerCase);

    cout << "\nUpper case words:" << endl;

    for(list<string>::iterator iter = upperCase.begin(); iter != upperCase.end(); ++iter){
        cout << *iter << endl;
    }

    cout << "\nLower case words:" << endl;

    for(list<string>::iterator iter = lowerCase.begin(); iter != lowerCase.end(); ++iter){
        cout << *iter << endl;
    }
}
