#include "utils.h"
#include <iostream>

Course::Course()
{
    count = 0;
}

Course::Course(std::string nameCourse)
{
    this->nameCourse = nameCourse;
    count = 0;
}

void Course::SetNameCourse(std::string name)
{
    this->nameCourse = name;    
}

void Course::AddStudent(Student* student)
{
    if (count > 2) 
    {
        std::cout << "More students than accepted"  << std::endl;
    }
    else
    {
        this->Students[count] = student;
    }
}

void Course::AddTeacher(Teacher* teacher)
{
    this->Professor = teacher;    
}

void Course::IncCount()
{
    this->count += 1;   
}

std::string Course::GetNameCourse()
{
    return this->nameCourse;
}

Course::~Course()
{
}

