#include "Student.h"

void Student::display() const
{
    // Call base-class version of display(), to display person-related info.
    Person::display();

    // Now display the student-related info.
    std::cout << course << std::endl;
}
