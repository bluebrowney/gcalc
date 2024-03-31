#ifndef STUDENT
#define STUDENT

#include "Semester.h"

#define MAX_STUDENT_NAME_LEN 50
#define MAX_SEMESTERS 12

class Student {

private: 
    char[MAX_STUDENT_NAME_LEN] name;
    int age;
    float gpa;
    Semester[MAX_SEMESTER] semesters;
public: 
    Student();
    ~Student();

    char* getName() {return name }
    int getAge() { return age }
    float getGPA();

    void calulateGPA();

}

#endif