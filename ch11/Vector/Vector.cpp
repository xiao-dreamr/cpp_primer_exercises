#include "Vector.hpp"
#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Vector::Vector(double x, double y)
{
    x_ = x;
    y_ = y;
}

Vector::~Vector()
{
}

double Vector::angle() const
{
    return std::atan2(y_, x_);
}

double Vector::magnitude() const
{
    return sqrt(x_ * x_ + y_ * y_);
}

void Vector::setByPolar(double magnitude, double angle)
{
    x_ = magnitude * cos(angle);
    y_ = magnitude * sin(angle);
}

void Vector::setByRect(double x, double y)
{
    x_ = x;
    y_ = y;
}

Vector Vector::operator+(const Vector &v) const
{
    return Vector(x_ + v.x_, y_ + v.y_);
}

std::ostream &operator<<(std::ostream &os, const Vector &v)
{
    os << "(x,y)=(" << v.x_ << ", " << v.y_ << ")\n";
    return os;
}