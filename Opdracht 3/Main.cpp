#include <iostream>
#include "Student.h"
#include "Teacher.h"

int main() {
    Student student = Student("Bas Gitaar", 21, 123456);

    cout << student.getAge();

    
    Teacher teacher = Teacher("Harry Hotel", 40, 1000000);

    cout << teacher.getSalary();

    return 0;
}