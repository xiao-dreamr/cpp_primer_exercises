#include <iostream>
using namespace std;

long long factorial(long long n);

int main(int argc, char const *argv[])
{
    long long n = 0;
    while (true)
    {
        cout << "你想求多少的阶乘？n=";
        cin >> n;
        cout << "n! = " << factorial(n) << endl;
    }

    return 0;
}

long long factorial(long long n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
// SUCCESS
// 但是long long类型的数字最多只能支持到25!,再大就只能调用大数库了