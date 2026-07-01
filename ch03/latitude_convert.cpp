#include<iostream>
using std::cout;
using std::cin;
using std::endl;

double ToDegrees(int,int,int);

int main(){
    int deg,min,sec = 0;
    cout << "请输入你的纬度的度、分、秒\n";
    cout << "度：";
    cin >> deg;
    cout << "分：";
    cin >> min;
    cout << "秒：";
    cin >> sec;
    cout << deg << "°" << min << "'" << sec << "'' = " << ToDegrees(deg,min,sec);
}

double ToDegrees(int d, int m, int s){
    return d + m/60.0 + s/3600.0;
}