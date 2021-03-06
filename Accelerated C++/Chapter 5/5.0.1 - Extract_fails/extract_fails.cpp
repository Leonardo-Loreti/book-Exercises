#include <iostream>
#include <vector>
#include <list>
#include "extract_fails.h"

using std::vector;
using std::list;
using std::cin;

double grade(const Student_info& s){
    double finalGrade;

    return finalGrade = (s.midterm + s.final + s.homework)/3;
}

bool fgrade(const Student_info& s){
    return grade(s) < 60;
}

vector<Student_info> extract_fails(vector<Student_info>& students){

    vector<Student_info> pass, fail;

    for(vector<Student_info>::size_type i = 0; i != students.size(); ++i){
        if(fgrade(students[i])){
            fail.push_back(students[i]);
        }else{
            pass.push_back(students[i]);
        }
    }
    students = pass;
    return fail;
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
    vector<Student_info>::iterator iter = students.begin();
    while (iter != students.end())
    {
        if (fgrade(*iter))
        {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
            ++iter;
    }
    return fail;
}

list<Student_info> extract_fails(list<Student_info>& students)
{
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();
    while (iter != students.end())
    {
        if (fgrade(*iter))
        {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
            ++iter;
    }
    return fail;
}
