#include<iostream>
using namespace std;

void TimeFormat(int, int);

int main(){
    int hours = 0;
    int minutes = 0;
    cout << "当前的小时数：";
    cin >> hours;
    cout << "当前的分钟数：";
    cin >> minutes;
    TimeFormat(hours, minutes);
    return 0;
}

void TimeFormat(int h, int m){
    if(h > 24 || m > 59){
        cout << "?" << endl;
        return;
    } // 非地球时间
    cout << "当前时间为：" << h << ":" << m << endl;
}