#include "complex_number.hpp"
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

std::ostream &operator<<(std::ostream &os, const ComplexNumber &c)
{
    double r = c.real;
    double i = c.imaginary;
    if (i != 0 && r != 0)
    {
        if (i > 0)
        {
            os << r << "+" << i << "i";
        }
        else
        {
            os << r << "-" << -i << "i";
        }
    }
    else if (i == 0)
    {
        os << r;
    }
    else if (i != 0 && r == 0)
    {
        os << i << "i";
    }

    return os;
}

ComplexNumber::ComplexNumber(double r, double i)
{
    real = r;
    imaginary = i;
}

ComplexNumber::~ComplexNumber()
{
}

void ComplexNumber::inputNumber()
{
    cout << "请输入实部：";
    cin >> real;
    cout << "请输入虚部：";
    cin >> imaginary;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber &c) const
{
    return ComplexNumber(real + c.real, imaginary + c.imaginary);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &c) const
{
    return ComplexNumber(real - c.real, imaginary - c.imaginary);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &c) const
{
    return ComplexNumber(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber &c) const
{
    return (*this) * (~c) / sqrt(c.real * c.real + c.imaginary * c.imaginary);
}

ComplexNumber ComplexNumber::operator/(const double n) const
{
    return ComplexNumber(real / n, imaginary / n);
}

ComplexNumber ComplexNumber::operator~() const
{
    return ComplexNumber(real, -imaginary);
}

ComplexNumber operator*(double n, const ComplexNumber &c)
{
    return ComplexNumber(n * c.real, n * c.imaginary);
}
