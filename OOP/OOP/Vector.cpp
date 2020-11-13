#include "Vector.h"

Vector operator+(Vector v1, Vector v2) {
    Vector v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v;
}

Vector Vector::operator-(Vector v)
{
    return { this->x - v.x, y - v.y };
}
