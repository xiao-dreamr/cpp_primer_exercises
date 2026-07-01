#include<iostream>
using std::cout;
using std::cin;
using std::endl;

const int S_PER_M = 60;
const int S_PER_H = 60*S_PER_M;
const int S_PER_DAY = 24*S_PER_H;

int main(int argc, char const *argv[])
{
    long long sec{};
    cout << "请输入秒数：";
    cin >> sec;
    cout << sec <<"s = "<< sec/S_PER_DAY <<"天 "
        << (sec%S_PER_DAY)/S_PER_H<<"时 "
        <<((sec%S_PER_DAY)%S_PER_H)/S_PER_M<< "分 "
        <<((sec%S_PER_DAY)%S_PER_H)%S_PER_M<<"秒";
    return 0;
}
