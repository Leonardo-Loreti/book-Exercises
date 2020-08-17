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

int main_1()
{
    vector<Student_info> students_failed;
    vector<Student_info> students;
    string s;

    while(cin >> s){
        Student_info record;
        record.name = s;
        cin >> record.midterm >> record.final >> record.homework;
        students.push_back(record);
    }
    students_failed = extract_fails(students);

    cout << "Approved students:" << endl;
    for(vector<Student_info>::size_type i = 0; i != students.size(); ++i){
        cout << students[i].name << endl;
    }

    cout << endl;

    cout << "Reproved students:" << endl;
    for(vector<Student_info>::size_type i = 0; i != students.size(); ++i){
        cout << students_failed[i].name << endl;
    }
    return 0;
}

int main()
{
    list<Student_info> students_failed;
    list<Student_info> students;
    string s;

    while(cin >> s){
        Student_info record;
        record.name = s;
        cin >> record.midterm >> record.final >> record.homework;
        students.push_back(record);
    }
    students_failed = extract_fails(students);

    cout << "Approved students:" << endl;
    for(list<Student_info>::const_iterator iter = students.begin(); iter != students.end(); ++iter){
        cout << iter->name << endl;
    }

    cout << endl;

    cout << "Reproved students:" << endl;
    for(list<Student_info>::const_iterator iter = students_failed.begin(); iter != students_failed.end(); ++iter){
        cout << iter->name << endl;
    }

    return 0;
}
