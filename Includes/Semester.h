#ifndef SEMESTER
#define SEMESTER

#include "Course.h"

#define MAX_NUM_COURSES 10

class Semester {

private: 
    Course[MAX_NUM_COURSES] courses;
    short int semesterNum;
    Code code;

public:
    enum Term { Su, F, W, S };
    struct Code {

        Term term;
        short int year;

    };

    Semester();
    ~Semester();

}


#endif