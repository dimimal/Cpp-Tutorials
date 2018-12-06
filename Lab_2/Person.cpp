#include <iostream>
#include "Person.h"

Person::Person(int age): age(age)
{
}

Person::~Person()
{
}

int Person::getAge()
{
    return age;    
}

void Person::OutputAge() const 
{
    std::cout << "I am " << age << " year old." << std::endl;
    // 
}
