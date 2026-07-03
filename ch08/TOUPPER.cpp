#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void toUpper(string &str);

int main(int argc, char const *argv[])
{
    string text{};
    while (true)
    {
        cout << "请输入英文字符：";
        cin >> text;
        toUpper(text);
        cout << text << endl;
    }

    return 0;
}

void toUpper(string &str)
{
    for (auto &&c : str)
    {
        c = toupper(c); // toupper是返回大写版本，而不是把c转换为大写版本
    }
    return;
}
// SUCCESS