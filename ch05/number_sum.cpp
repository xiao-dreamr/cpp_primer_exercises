#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long num1, num2 = 0;
    cout << "请输入小数：";
    cin >> num1;
    cout << "请输入大数：";
    cin >> num2;
    long sum = 0;
    for (long i = num1; i <= num2; i++)
    {
        sum += i;
    }
    cout << "他们及其中间数字的总和为：" << sum << endl;
    return 0;
}

// SUCCESS
