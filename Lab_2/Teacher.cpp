#include "Teacher.h"
#include <iostream>

Teacher::Teacher(int age): Person(age)
{
}

Teacher::~Teacher()
{
}

void Teacher::OutputAge()
{
    // Person::OutputAge();
    std::cout << "I am a teacher and " << Person::getAge() << " years old."  << std::endl;
}

void Teacher::OutputIdentity()
{
    std::cout << "I am a teacher" << std::endl;
}

