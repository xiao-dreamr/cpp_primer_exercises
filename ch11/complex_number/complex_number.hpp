#if !defined(COMPLEX_NUMBER_H_)
#define COMPLEX_NUMBER_H_
#include <iostream>
class ComplexNumber
{
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double r, double i = 0); // 通过i=0这样可以让实数自动转换为复数
    ~ComplexNumber();
    void inputNumber();
    friend ComplexNumber operator*(double n, const ComplexNumber &c);
    friend std::ostream &operator<<(std::ostream &os, const ComplexNumber &c);
    ComplexNumber operator+(const ComplexNumber &c) const;
    ComplexNumber operator-(const ComplexNumber &c) const;
    ComplexNumber operator*(const ComplexNumber &c) const;
    ComplexNumber operator/(const ComplexNumber &c) const;
    ComplexNumber operator/(const double n) const;
    ComplexNumber operator~() const;
};

#endif // COMPLEX_NUMBER_H_
