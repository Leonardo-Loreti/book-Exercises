#include <iostream>
#include <vector>
#include "extract_fails.h"

using std::vector;
using std::cin;

double grade(const Student_info& s){
    double finalGrade;

    return finalGrade = (s.midterm + s.final + s.homework)/3;
}

bool fgrade(const Student_info& s){
    return grade(s) < 60;
}

vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::size_type i = 0;

    while (i != students.size()){
        if (fgrade(students[i])){
            fail.push_back(students[i]);
            students.erase(students.begin() + i);
        }else{
            ++i;
        }
    }
    return fail;
}

vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::size_type i = 0, j = 0;

    while (i != students.size()){
        if (fgrade(students[i])){
            fail.push_back(students[i]);
            //students.erase(students.begin() + i);
        }else{
            students[j] = students[i];
            ++j;
        }
        ++i;
    }
    students.resize(j);
    return fail;
}
