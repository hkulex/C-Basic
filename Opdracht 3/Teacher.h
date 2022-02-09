#include "Person.h"

class Teacher : public Person {
    private:
        int salary;

    public:
        Teacher(string n, int a, int s);
        int getSalary();
};