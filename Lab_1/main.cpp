#include "utils.h"
#include <iostream>

int main(int argc, char *argv[])
{
    // Instantiate students
    Student *student_1 = new Student();
    Student *student_2 = new Student();
    Student *student_3 = new Student();
    
    // Instantiate teacher
    Teacher *course_T = new Teacher();

    Course *intermediate = new Course("Mathematics");

    intermediate->AddStudent(student_1);
    intermediate->IncCount();

    intermediate->AddStudent(student_2);
    intermediate->IncCount();

    intermediate->AddStudent(student_3);
    intermediate->IncCount();

    intermediate->AddTeacher(course_T);

    std::cout << "The name of the course " << intermediate->GetNameCourse() << std::endl;
    course_T->GradeStudent();

    return 0;
}
