#pragma once
#include "Person.h"


class Student : public Person
{
private:
    std::string course;

public:
     virtual void display() const;     // Override function from base class.
};
