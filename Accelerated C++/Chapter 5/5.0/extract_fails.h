#ifndef EXTRACT_FILES_H_INCLUDED
#define EXTRACT_FILES_H_INCLUDED

struct Student_info{
    std::string name;
    double midterm, final, homework;
};

double grade(const Student_info&);
bool fgrade(const Student_info&);
std::vector<Student_info> extract_fails(std::vector<Student_info>&);
std::list<Student_info> extract_fails(std::list<Student_info>&);

#endif // EXTRACT_FILES_H_INCLUDED
