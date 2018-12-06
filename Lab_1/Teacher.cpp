#include "utils.h"
#include <iostream>

Teacher::Teacher()
{
    firstName = "";
    lastName = "";
    address = "";
    age = 0;
    phone = 0;
}

Teacher::Teacher(
            std::string fName,
            std::string lName,
            std::string address,
            std::string city,
            int age,
            int phone)
{
    firstName = fName;
    lastName = lName;
    age = age;
    address = address;
    city = city;
}

// Destructor
Teacher::~Teacher()
{
}

void Teacher::SetFirstName(std::string fName)
{
    this->firstName = fName;
}

std::string Teacher::GetFirstName()
{
    return this->firstName;
}

void Teacher::SetLastName(std::string lName)
{
    this->lastName = lName;
}

void Teacher::SetAddress(std::string address)
{
    this->address = address;
}

std::string Teacher::GetAddress()
{
    return this->address;
}

std::string Teacher::GetLastName()
{
    return this->lastName;
}

void Teacher::SetAge(int age)
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

int Teacher::GetAge()
{
    return this->age;
}

std::string Teacher::GradeStudent()
{
    std::cout << "Student Graded " << std::endl;
}

void SitInClass()
{
    std::cout << "Sitting at the front of class " << std::endl;
}
