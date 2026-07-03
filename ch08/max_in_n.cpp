#include <iostream>
using namespace std;

template <typename T>
T max(T arr[], int n);

// 注意：显式具体化的函数必须位于实例化之前
template <>
string max(string arr[], int n)
{
    if (n <= 0)
    {
        return "";
    }
    string max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max.length() < arr[i].length())
        {
            max = arr[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int arrint[6] = {25, 456, 2, 7, -234, 123};
    double arrdouble[4] = {3234.546, 113.567, 86.345, -24.765};
    string arrstring[5] = {"114514", "1919810", "59160153", "逸一时，误一世", "逸久逸久罢已零。"};
    cout << "arrint中最大的元素是：" << max(arrint, 6) << endl;
    cout << "arrdouble中最大的元素是：" << max(arrdouble, 4) << endl;
    cout << "arrstring中最大的元素是：" << max(arrstring, 5) << endl;
    return 0;
}

template <typename T>
T max(T arr[], int n)
{
    if (n <= 0)
    {
        return T();
    }
    T max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
// SUCCESS