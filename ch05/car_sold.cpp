#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sells[3][12] = {};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout << "请输入第" << i + 1 << "年" << j + 1 << "月的销售额：";
            cin >> sells[i][j];
        }
    }
    long sum;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 12; j++)
        {
            sum += sells[i][j];
        }
        cout << "第" << i + 1 << "年的销售总额为：\t" << sum << endl;
    }

    return 0;
}
