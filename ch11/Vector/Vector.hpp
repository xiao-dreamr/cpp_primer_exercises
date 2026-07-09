#if !defined(VECTOR_H_)
#define VECTOR_H_

#include <iostream>

class Vector
{
private:
    double x_;
    double y_;

public:
    Vector(double x, double y);
    ~Vector();
    double magnitude() const;
    double angle() const;
    friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    Vector operator+(const Vector &v) const;
    void setByPolar(double magnitude, double angle);
    void setByRect(double x, double y);
};

#endif // VECTOR_H_
