#include "Person.h"

Person::Person(string n, int a) {
    name = n;
    age = a;
}


string Person::getName() { 
    return name;
}


int Person::getAge() { 
    return age;
}