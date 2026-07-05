#include "bank_account.hpp"
#include <iomanip>
#include <iostream>

Account::Account(std::string name, long id, double balance)
{
    name_ = name;
    id_ = id;
    save(balance);
}

Account::~Account()
{
}

void Account::save(double count)
{
    using std::cout;
    if (count < 0)
    {
        cout << "存款金额不能为负数！\n";
    }
    balance_ += count;
    return;
}

void Account::withdraw(double count)
{
    using std::cout;
    if (balance_ < count)
    {
        cout << "余额不足！\n";
    }
    else
    {
        balance_ -= count;
    }
}

void Account::displayInfo()
{
    using std::cout, std::endl;
    cout << std::fixed << std::setprecision(4);
    cout << "存款人信息：\n";
    cout << "姓名：" << name_ << endl;
    cout << "账号：" << id_ << endl;
    cout << "余额：" << balance_ << endl;
}