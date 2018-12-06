#include "Person.h"
#include <iostream>

Person::~Person()
{
    // Destruction Code
}

void Person::display() const
{
    std::cout << name << ", " << age << std::endl;
}
