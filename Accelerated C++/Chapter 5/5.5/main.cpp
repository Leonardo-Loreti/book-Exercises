#include <iostream>
#include <vector>
#include "center.h"

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){

    vector<string> lines;
    string s;

    while(getline(cin, s)){
        lines.push_back(s);
    }

    center(lines);
}
