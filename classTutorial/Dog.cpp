#include "Dog.h"
#include <iostream>

Dog::Dog()
{
    firstName = "";
    lastName = "";
    age = 0;
}

Dog::Dog(std::string fName, std::string lName)
{
    firstName = fName;
    lastName = lName;
    age = 0;
}

Dog::Dog(std::string fName, std::string lName, int age)
{
    firstName = fName;
    lastName = lName;
    this->age = age;
}

Dog::~Dog()
{
}

void Dog::SetFirstName(std::string fName)
{
    this->firstName = fName;
}

std::string Dog::GetFirstName()
{
    return this->firstName;
}

void Dog::SetLastName(std::string lName)
{
    this->lastName = lName;
}

std::string Dog::GetLastName()
{
    return this->lastName;
}

void Dog::SetAge(int age)
{
    if (age > 0)
    {
        this->age = age;
    }
    else
    {
        std::cout << "Please enter a valid age" << std::endl;
    }
}

int Dog::GetAge()
{
    return this->age;
}

void Dog::SayHello()
{
    std::cout << "Hello" << std::endl;
}
