#include <iostream>
using namespace std;

double harmonic_mean(double a, double b);

int main(int argc, char const *argv[])
{
    double x, y;
    x = y = 0;
    cout << "===调和平均数计算器（输入0退出）===\n";
    do
    {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        cout << "x,y的调和平均数为：" << harmonic_mean(x, y) << endl;
    } while (x != 0 && y != 0);
    cout << "已退出";
    return 0;
}

double harmonic_mean(double a, double b)
{
    return 2.0 * a * b / (a + b);
}

// SUCCESS