#include "Person.h"
#include "Student.h"
#include <iostream>


int main(int argc, char *argv[])
{
    Student s;

    // A base-class pointer can point to that type of object,
    // or to any derived type of object.
    Person * p1 = new Person;
    Person * p2 = new Student;

    // A base-class reference can refer to that type of object, 
    // or to any derived type of object.
    Person & r1 = *p1;
    Person & r2 = *p2;

    s.display();

    // Print the same values
    r1.display();
    r2.display();
    p1->display();

    return 0;
}
