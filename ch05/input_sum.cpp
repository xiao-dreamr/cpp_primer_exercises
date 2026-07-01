#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double sum, num = 0;
    do
    {
        cout << "请输入数字：";
        cin >> num;
        sum += num;
        cout << "你所输入的数字总和为：" << sum << endl;
    } while (num != 0);
    cout << "你已退出程序。" << endl;
    return 0;
}
// SUCCESS