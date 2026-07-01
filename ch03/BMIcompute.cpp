#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

double GetBMI(double,double,double);

int main(){
    int inch_height{};
    int feet_height{};
    double pound_weight{};
    cout << "请输入身高（英尺）：";
    cin >> feet_height;
    cout << "请输入身高（英寸）：";
    cin >> inch_height;
    cout << "请输入体重（磅）：";
    cin >> pound_weight;
    cout << "你的BMI为：" << GetBMI(pound_weight,feet_height,inch_height);
}

double GetBMI(double w, double f, double i){
    const int FEET_TO_INCH = 12;
    const double INCH_TO_METRE = 0.0254;
    const double POUND_TO_KG = 5./11.;
    return w*POUND_TO_KG/pow((f*FEET_TO_INCH+i)*INCH_TO_METRE,2);
}