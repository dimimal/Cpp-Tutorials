#pragma once
#include "Person.h"
#include <iostream>

class Teacher : public Person
{
public:

    Teacher(int age);

    virtual void OutputIdentity();
    virtual void OutputAge();

    virtual ~Teacher();

};


