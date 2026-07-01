#include <iostream>
#include <string>
#include <array>
using namespace std;

struct car
{
    string maker;
    int date;
};

int main(int argc, char const *argv[])
{
    int car_amount = 0;
    cout << "你想要录入多少辆车？";
    cin >> car_amount;
    car *cars = new car[car_amount];
    for (int i = 0; i < car_amount; i++)
    {
        cout << i + 1 << "号车：\n";
        cout << "请输入生产厂家：";
        cin >> cars[i].maker;
        cout << "请输入出场年份：";
        cin >> cars[i].date;
    }
    cout << "================\n你录入的车辆信息：\n";
    for (int i = 0; i < car_amount; i++)
    {
        cout << cars[i].date << "\t" << cars[i].maker << endl;
    }

    return 0;
}
