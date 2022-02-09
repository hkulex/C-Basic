#include "Student.h"

int id;

Student::Student(string n, int a, int i) {
    name = n;
    age = a;
    id = i;
}

int Student::getId() {
    return id;
}