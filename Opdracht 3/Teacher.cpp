#ifndef TEACHER_H
#define TEACHER_H

#include "Teacher.h"

int salary;

Teacher::Teacher(string n, int a, int s) {
    name = n;
    age = a;
    salary = s;
}

int Teacher::getSalary() { 
    return salary;
}

#endif