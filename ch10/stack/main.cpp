#include <iostream>
#include "stack.hpp"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    Stack stack;
    Customer c1 = {"刘华强", 30.0};
    Customer c2 = {"郝哥", 10.0};
    long sum = 0;
    stack.push(c1);
    stack.push(c2);
    Customer &c = stack.pop();
    sum += c.payment;
    cout << "第一位出场的顾客是：" << c.full_name << endl;
    c = stack.pop();
    sum += c.payment;
    cout << "第二位是：" << c.full_name << endl;
    cout << "金额总数为: " << sum;
    return 0;
}
