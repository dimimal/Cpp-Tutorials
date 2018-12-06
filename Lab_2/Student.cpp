#include "Student.h"
#include <iostream>

Student::Student(int age): Person(age)
{
}

Student::~Student()
{
}

void Student::OutputAge()
{
    std::cout << "Student Age: "<< Person::getAge() << std::endl;
}

void Student::OutputIdentity()
{
    std::cout << "I am a student" << std::endl;
}
