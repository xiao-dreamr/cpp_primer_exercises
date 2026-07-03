#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calories;
};

void showCandyBar(const CandyBar &cb);

void setCandyBar(CandyBar &cb, string brand = "Millennium Munch",
                 double weight = 2.85, int calories = 350);

int main(int argc, char const *argv[])
{
    CandyBar candy_bar{};
    setCandyBar(candy_bar);
    showCandyBar(candy_bar);
    setCandyBar(candy_bar, "大白兔", 200, 0);
    showCandyBar(candy_bar);
    return 0;
}

void showCandyBar(const CandyBar &cb)
{
    cout << "该糖果的信息为：\n";
    cout << "品牌：" << cb.brand << endl;
    cout << "质量：" << cb.weight << " g" << endl;
    cout << "热量：" << cb.calories << " cal" << endl;
}

void setCandyBar(CandyBar &cb, string brand, double weight, int calories)
{
    cb.brand = brand;
    cb.weight = weight;
    cb.calories = calories;
}
// SUCCESS