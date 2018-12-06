#pragma once

#include <string>

class Dog
{

private:
    std::string firstName;
    std::string lastName;
    std::string address;
    std::string city;

    int phone;
    int age;

public:

    Dog();

    Dog(std::string fName, std::string lName);

    Dog(std::string fName, std::string lName, int age);

    ~Dog();

    void SetFirstName(std::string fName);
    std::string GetFirstName();

    void SetLastName(std::string lName);
    std::string GetLastName();

    void SetAge(int age);
    int GetAge();

};

