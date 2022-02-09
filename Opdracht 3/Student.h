#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
    private:
        int id;

    public: 
        Student(string n, int a, int i);
        int getId();
};

#endif