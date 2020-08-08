#include <iostream>
#include <algorithm>

struct Student_info{
    std::string name;
};

using std::cout;
using std::endl;
using std::string;
using std::max;

//We need to use the same type of variables on the function max. If we were using different types, like
//an int for maxlen, we just had to rewrite the type of this variable, like in the program below, where
//maxlen has the same type as string::size_type.

int main(){
    string::size_type maxlen = 0;
    //int maxlen;
    Student_info s;
    s.name = "Rodolfo";
    maxlen = max(maxlen, s.name.size());

    cout << maxlen << endl;

}
