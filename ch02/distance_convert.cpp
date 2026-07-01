#include <iostream>

double distance_convert(double);

int main(){
    double long_distance;
    std::cout << "请输入long单位距离：";
    std::cin >> long_distance;
    std::cout << "对应的码长度为：" << distance_convert(long_distance) << std::endl;
}

double distance_convert(double yard){
    return yard*220;
}