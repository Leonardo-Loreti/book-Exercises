#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    string longest;
    string shortest;
    string x;

    cin >> x;
    longest = x;
    shortest = longest;

    while(cin >> x){
        if(x.size() > longest.size()){
            longest = x;
        }else if(x.size() < shortest.size()){
            shortest = x;
        }
    }

    cout << "Longest: " << longest << "; Length: " << longest.size() << endl;
    cout << "Shortest: " << shortest << "; Length: " << shortest.size() << endl;
}
