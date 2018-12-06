#include "Person.h"
#include "Dog.h"
#include <iostream>

int main(int argc, char *argv[])
{
    Person *p = new Person("Tom", "Hanks");
       
    std::cout << "Person first name" << p->GetFirstName() << std::endl;

    p->SayHello();
    
    Dog *d = new Dog("Fido", "Thumb");

    std::cout << "Dog first name" << d->GetFirstName() << std::endl;
   
    d->SayHello();

    return 0;
}
