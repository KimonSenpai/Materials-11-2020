#pragma once

class Vector
{
public:
    double x, y;
    Vector operator-(Vector);
};
Vector operator+(Vector, Vector);

