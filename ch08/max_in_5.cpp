#include <iostream>
using namespace std;

template <typename T>
T maxIn5(T arr[5]);

int main(int argc, char const *argv[])
{
    int arrint[5] = {1, 56, 8, 3, 22};
    double arrdouble[5] = {6.11, 6.8, 3453.77, -234.75};
    cout << "数组arrint中，最大的是：" << maxIn5(arrint) << endl;
    cout << "数组arrdouble中，最大的是：" << maxIn5(arrdouble) << endl;
    return 0;
}

template <typename T>
T maxIn5(T arr[5])
{
    T max = arr[0];
    for (int i = 1; i < 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
// SUCCESS