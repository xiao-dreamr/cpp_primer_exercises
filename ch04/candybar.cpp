#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};

string CandyInfoFormat(CandyBar);

int main(int argc, char const *argv[])
{
    CandyBar candies[3] = {
        {"德芙", 252.0, 0},
        {"大白兔", 500.0, 0},
        {"荷氏", 500.0, -1},
    };
    for (int i = 0; i < 3; i++)
    {
        cout << CandyInfoFormat(candies[i]) << endl
             << endl;
    }

    return 0;
}

string CandyInfoFormat(CandyBar candybar)
{
    return "品牌：" + candybar.brand +
           "\n质量：" + std::to_string(candybar.weight) +
           "\n卡路里：" + std::to_string(candybar.calorie);
}