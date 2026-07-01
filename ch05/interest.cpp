#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const long origin = 100;
    double C_interest = 0.05;
    double D_interest = 0.10;
    double C_money = origin;
    double D_money = origin;
    int year = 0;
    while (C_money <= D_money)
    {
        C_money *= 1 + C_interest;
        D_money += origin * D_interest;
        year++;
    }
    cout << "此时C的资产为：" << C_money << endl;
    cout << "此时D的资产为：" << D_money << endl;
    cout << "共花费了" << year << "年\n";
    return 0;
}
