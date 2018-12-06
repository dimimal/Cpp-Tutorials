#pragma once
#include "Person.h"

class Student : public Person
{
public:
    Student (int age);
    virtual ~Student ();

    virtual void OutputIdentity();
    virtual void OutputAge();
};
