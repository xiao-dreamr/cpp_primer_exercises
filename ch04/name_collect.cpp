#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    char first_name[80];
    char last_name[80];
    cout << "请输入您的姓：";
    cin.getline(last_name, 79);
    cout << "请输入您的名字：";
    cin.getline(first_name, 79);
    char *fnp = new char[strlen(first_name)];
    char *lnp = new char[strlen(last_name)];
    strcpy(fnp, first_name);
    strcpy(lnp, last_name);
    cout << "您的姓名是：" << fnp << ", " << lnp;
    return 0;
}
