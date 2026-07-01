#include<iostream>
using std::cout;
using std::cin;
using std::endl;

const int INCH_TO_FEET = 12;

int main(){
    int height{};
    cout << "请输入身高：__feet\b\b\b\b\b\b";
    cin >> height;
    cout << "你的身高为：" << height/INCH_TO_FEET << "ft. " << height%INCH_TO_FEET << "in.";
}