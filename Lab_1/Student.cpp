#include "utils.h"
#include <iostream>

Student::Student()
{
    firstName = "";
    lastName = "";
    address = "";
    age = 0;
    phone = 0;
}

Student::Student(
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
Student::~Student()
{
}

void Student::SetFirstName(std::string fName)
{
    this->firstName = fName;
}

std::string Student::GetFirstName()
{
    return this->firstName;
}

void Student::SetLastName(std::string lName)
{
    this->lastName = lName;
}

void Student::SetAddress(std::string address)
{
    this->address = address;
}

std::string Student::GetAddress()
{
    return this->address;
}

std::string Student::GetLastName()
{
    return this->lastName;
}

void Student::SetAge(int age)
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

int Student::GetAge()
{
    return this->age;
}

void Student::SitInClass()
{
    std::cout << "Sitting in main Theater " << std::endl;
}
