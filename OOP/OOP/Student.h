#pragma once
#include <string>
#include <iostream>
using std::string;
class Student
{
private:
    string name;
    int grade;
    char letter;
    int phys, inf;
    int* math;
public:
    Student(string name, int grade, char letter);
    Student(string name, int grade, char letter, int math, int phys, int inf);

    bool SetInf(int mark);



    ~Student();
};
