#pragma once
#include <iostream>


class Person
{
private:
    // Only this class has access to this variable
    // int age;

protected:
    int phone;
    int age;

public:
    std::string first_name;
    std::string last_name;
    std::string race;

    //Person(std::string first_name, std::string last_name, std::string race,
    //       int age, int phone);
    Person(int age);

    virtual ~Person();

    int getAge();
    virtual void OutputIdentity() = 0; // Overrideable function.
    virtual void OutputAge() const;
};
