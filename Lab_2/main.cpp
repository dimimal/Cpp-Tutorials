#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include <iostream>

int main(int argc, char *argv[])
{
    Student student_1(10);
    Teacher teacher_1(45);

    student_1.OutputAge();
    student_1.OutputIdentity();

    teacher_1.OutputAge();
    teacher_1.OutputIdentity();

    return 0;
}
