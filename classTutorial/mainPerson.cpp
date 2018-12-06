#include "Person.h"
#include <iostream>

using namespace std;

int main()
 {
 
    // create a Person instance using default constructor
    Person *pOne = new Person();
    
    // Create a Person instance using 2 argument constructor
    Person *pTwo = new Person("Tom", "Thumb");
 
    // Create a Person instance using 3 argument constructor
    Person *pThree = new Person("Tom", "Thumb", 15);
    
    return 0;
}
