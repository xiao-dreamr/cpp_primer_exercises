#include <iostream>
#include <array>
using std::array;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    array<double, 3> time{};
    for (short i = 0; i < 3; i++)
    {
        cout << "请输入第" << i + 1 << "次成绩：";
        cin >> time[i];
    }
    cout << "你的平均成绩是" << (time[0] + time[1] + time[2]) / 3 << "s\n";
    return 0;
}
