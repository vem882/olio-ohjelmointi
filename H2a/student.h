#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int studentNumber;
    double average;
public:
    Student();


    string getName() const;
    void setName(const string &newName);
    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);
    double getAverage() const;
    void setAverage(double newAverage);
};

#endif // STUDENT_H
