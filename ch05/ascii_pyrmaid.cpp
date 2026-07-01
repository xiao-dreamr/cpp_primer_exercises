#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int line = 0;
    cout << "你想建造多少层的金字塔：";
    cin >> line;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < line - 1 - i; j++)
        {
            cout << ".";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// SUCCESS