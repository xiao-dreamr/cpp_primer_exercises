#include<iostream>
using namespace std;

double CtoF(double);

int main(){
    double degree = 0;
    cout <<"请输入摄氏温度：";
    cin >> degree;
    cout << degree << "°C = " << CtoF(degree) << "°F" <<endl;
    return 0;
}

double CtoF(double degree){
    return 1.8*degree + 32.0;
}