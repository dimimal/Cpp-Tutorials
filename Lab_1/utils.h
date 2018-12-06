#pragma once

#include <string>

class Student
{

private:
    std::string firstName;
    std::string lastName;
    std::string address;
    std::string city;

    int phone;

    int age;

public:

    int count;

    Student();

    Student(
            std::string fName,
            std::string lName,
            std::string address,
            std::string city,
            int age,
            int phone);

    ~Student();

    void SetAddress(std::string address);
    std::string GetAddress();

    void SetFirstName(std::string fName);
    std::string GetFirstName();

    void SetLastName(std::string lName);
    std::string GetLastName();

    void SetAge(int age);

    int GetAge();

    void SayHello();
    void SitInClass();
};

class Teacher
{

private:
    std::string firstName;
    std::string lastName;
    std::string address;
    std::string city;

    int phone;
    int age;

public:

    Teacher();

    Teacher(
            std::string fName,
            std::string lName,
            std::string address,
            std::string city,
            int age,
            int phone);

    ~Teacher();

    void SetFirstName(std::string fName);
    std::string GetFirstName();

    void SetLastName(std::string lName);
    std::string GetLastName();

    void SetAddress(std::string lName);
    std::string GetAddress();

    void SetCity(std::string cityName);
    std::string GetCity();

    void SetPhone(int phone);
    int GetPhone();

    void SetAge(int age);
    int GetAge();

    std::string GradeStudent();
    void SitInClass();
};

class Course
{
public:
    Course ();

    Course(std::string name);

    ~Course ();

    void AddStudent(Student *student);

    void AddTeacher(Teacher *teacher);

    void SetNameCourse(std::string name);
    std::string GetNameCourse();

    void IncCount();

private:
    std::string nameCourse;
    int count;
    Student *Students[3];
    Teacher *Professor;
};
