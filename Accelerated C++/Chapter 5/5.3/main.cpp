#include <iostream>
#include <vector>
#include <list>
#include "extract_fails.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;
using std::string;

int main()
{
    typedef vector<Student_info> container_Student_info; //just switch vector to list if you want.

    container_Student_info students;
    container_Student_info students_failed;
    string s;

    while(cin >> s){
        Student_info record;
        record.name = s;
        cin >> record.midterm >> record.final >> record.homework;
        students.push_back(record);
    }

    students_failed = extract_fails(students);

    cout << "\nApproved students:" << endl;
    for(vector<Student_info>::size_type i = 0; i != students.size(); ++i){
        cout << students[i].name << endl;
    }

    cout << endl;

    cout << "Reproved students:" << endl;
    for(vector<Student_info>::size_type i = 0; i != students_failed.size(); ++i){
        cout << students_failed[i].name << endl;
    }
    return 0;
}
