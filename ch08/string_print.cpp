#include <iostream>
#include <string>
using namespace std;

void print(string text, int times = 1);

int main(int argc, char const *argv[])
{
    string t = {};
    int times;
    cout << "你想输入什么？\n";
    cin >> t;
    cout << "多少次？\n";
    cin >> times;
    print(t, times);
    return 0;
}

void print(string text, int times)
{
    if (times <= 0)
    {
        times = 1;
    }
    for (int i = 0; i < times; i++)
    {
        cout << text << endl;
    }
}
