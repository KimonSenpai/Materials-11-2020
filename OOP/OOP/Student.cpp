#include "Student.h"

Student::Student(string name, int grade, char letter) {
    this->name = name;
    this->grade = grade;
    this->letter = letter;
    math = new int[10];
}

Student::Student(string name, int grade, char letter, int math, int phys, int inf) {

}

bool Student::SetInf(int mark){
    if (mark < 1 || mark > 5)
        return false;
    this->inf = mark;
    return true;
}







Student::~Student()
{
    delete[] math;
}

