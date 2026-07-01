#include <iostream>
using namespace std;

typedef double (*pf)(double x, double y);

double add(double x, double y);
double mutiply(double x, double y);
double caculate(double x, double y, pf);

int main(int argc, char const *argv[])
{
    cout << "4+2=" << caculate(4, 2, add) << endl;
    cout << "4*2=" << caculate(4, 2, mutiply);
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double mutiply(double x, double y)
{
    return x * y;
}

double caculate(double x, double y, pf p)
{
    return p(x, y);
}
