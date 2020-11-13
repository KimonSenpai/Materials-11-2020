// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include "Vector.h"
int main()
{
    Student s("Vlad", 11, 'C');
    s.SetInf(4);
    int* p = new int;
    int* pp = new int;
    int l = p - pp;
    *(pp + l);

    Vector v1 = { 3, 5 }, v2 = { 5, 7 };

    Vector v = v1 + v2;//operator+(v1, v2)
    Vector* vvv = new Vector;
    vvv->x = 4;//(*vvv).x;
    v = v1 - v2;//v1.operator-(v2)

    delete p;
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
