#pragma once

#include <iostream>


class Person
{
private:
    std::string name;
    int age;

public:

    virtual ~Person();

    virtual void display() const;        // Overrideable function.
};
