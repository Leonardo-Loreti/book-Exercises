#include <iostream>
#include <vector>
#include <list>
#include <fstream>
#include <ctime>
#include "extract_fails.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;
using std::string;
using std::ifstream;


int main()
{
    vector<Student_info> students_failed;
    vector<Student_info> students;
    string s;
    clock_t startTime;
    clock_t endTime;
    clock_t clockTimeTaken;
    double timeInSeconds;

    ifstream data;
    data.open("data.txt");

    startTime = clock();
    while(data >> s){
            Student_info record;
            record.name = s;
            data >> record.midterm;
            data >> record.final;
            data >> record.homework;
            students.push_back(record);
    }

    data.close();

    students_failed = extract_fails(students);
    endTime = clock();

    clockTimeTaken = endTime - startTime;
    timeInSeconds = clockTimeTaken / (double)CLOCKS_PER_SEC;

    cout << timeInSeconds << endl;

    return 0;
}

int main()
{
    list<Student_info> students_failed;
    list<Student_info> students;
    string s;
    clock_t startTime;
    clock_t endTime;
    clock_t clockTimeTaken;
    double timeInSeconds;

    ifstream data;
    data.open("data.txt");

    startTime = clock();
    while(data >> s){
            Student_info record;
            record.name = s;
            data >> record.midterm;
            data >> record.final;
            data >> record.homework;
            students.push_back(record);
    }

    data.close();

    students_failed = extract_fails(students);
    endTime = clock();

    clockTimeTaken = endTime - startTime;
    timeInSeconds = clockTimeTaken / (double)CLOCKS_PER_SEC;

    cout << timeInSeconds << endl;

    return 0;
}
