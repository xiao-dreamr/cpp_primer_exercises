#include "complex_number.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    ComplexNumber z1 = 0;
    ComplexNumber z2 = 0;
    z1.inputNumber();
    z2.inputNumber();
    cout << "z1 + z2 = " << z1 + z2 << endl;
    cout << "z1 - z2 = " << z1 - z2 << endl;
    cout << "z1 * z2 = " << z1 * z2 << endl;
    cout << "z1 / z2 = " << z1 / z2 << endl;
    cout << "8z1 = " << 8 * z1 << endl;
    cout << "z2 + 3 = " << z2 + 3 << endl;
    return 0;
}
// SUCCESS