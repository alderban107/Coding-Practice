#ifndef STUDENT_H
#define STUDENT_H

class Student
{
public:
    int age;
    double grade;
    void print();
    Student(int y, double z)
    {
        age = y;
        grade = z;
    }
};

#endif