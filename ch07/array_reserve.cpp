#include <iostream>
using namespace std;

void reserve(double arr[], int length);

void display_arr(const double arr[], int length);

int main(int argc, char const *argv[])
{
    double arr[6] = {1., 2., 3., 4., 5., 6.};
    display_arr(arr, 6);
    reserve(arr + 1, 4);
    cout << "\n翻转后的数组：\n";
    display_arr(arr, 6);
    return 0;
}

void reserve(double arr[], int length)
{
    double rarr[length] = {};
    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        rarr[j] = arr[i];
    }
    for (int i = 0; i < length; i++)
    {
        arr[i] = rarr[i];
    }
    return;
}

void display_arr(const double arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }
}
// SUCCESS