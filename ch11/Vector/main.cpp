#include "Vector.hpp"
#include <iostream>
#include <random>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    const int count = 10000;
    Vector v{0, 0};
    Vector position{0, 0};
    int i;
    int sum;
    int max, min;
    max = 0;
    min = INT32_MAX;
    std::random_device rd;
    std::mt19937 gen(rd());
    // 生成 [0.0, 1.0) 的均匀浮点数
    for (int n; n < count; n++)
    {
        i = 0;
        position.setByRect(0, 0);
        std::uniform_real_distribution<double> dis(0.0, 3.14159265 * 2);
        while (position.magnitude() < 50)
        {
            v.setByPolar(2, dis(gen));
            position = position + v;
            i++;
        }
        cout << "现在的位置是：" << position << endl;
        cout << "花费了" << i << "步" << endl;
        sum += i;
        if (max < i)
        {
            max = i;
        }
        if (min > i)
        {
            min = i;
        }
    }
    cout << "平均步数为：" << double(sum) / double(count);
    cout << "最多走了：" << max << "步\n";
    cout << "最少走了：" << min << "步\n";
    return 0;
}
// SUCCESS