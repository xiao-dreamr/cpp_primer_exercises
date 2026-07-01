#include <iostream>
using namespace std;

enum
{
    TAX_L1 = 5000,
    TAX_L2 = 15000,
    TAX_L3 = 35000
};
const double TAX_P1 = 0.10;
const double TAX_P2 = 0.15;
const double TAX_P3 = 0.20;

double taxCaculate(double income);

int main(int argc, char const *argv[])
{
    double income = 0;
    cout << "请输入你的收入：";
    while (cin >> income && income >= 0)
    {
        cout << "你的个人所得税为：" << taxCaculate(income) << endl;
        cout << "请输入你的收入：";
    }
    cout << "输入不合法，已退出";
    return 0;
}

double taxCaculate(double income)
{
    if (income <= (int)TAX_L1)
    {
        return 0;
    }
    else if (income <= (int)TAX_L2)
    {
        return (income - (int)TAX_L1) * TAX_P1;
    }
    else if (income <= (int)TAX_L3)
    {
        return 1000 + (income - (int)TAX_L2) * TAX_P2;
    }
    else
    {
        return 4000 + (income - (int)TAX_L3) * TAX_P3;
    }
}
// SUCCESS