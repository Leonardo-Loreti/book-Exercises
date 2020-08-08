#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::setprecision;
using std::fixed;

int main(){

    vector<string> names;
    vector<double> grades;
    string name, longest;
    double midterm, final, hw1, hw2, hw3, hw4, grade;
    vector<double>::size_type i = 0;

    while(cin >> name){
        names.push_back(name);

        if(name.size() > longest.size()){
            longest = name;
        }

        cin >> midterm >> final >> hw1 >> hw2 >> hw3 >> hw4;
        grade = 0.2*midterm + 0.4*final + ((hw1 + hw2 + hw3 + hw4)/4)*0.4;
        grades.push_back(grade);

        i++;
    }

    for(i = 0; i != names.size(); i++){
        cout << fixed << setprecision(2) << names[i] << string(longest.size() - names[i].size() + 2, ' ') << grades[i] /*<< setprecision(prec)*/ << endl;
    }
}
