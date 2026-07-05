#ifndef BANK_ACCOUNT_
#define BANK_ACCOUNT_

#include <string>

class Account
{
private:
    std::string name_;
    long id_;
    double balance_;

public:
    Account(std::string name, long id, double balance);
    ~Account();
    void save(double count);
    void withdraw(double count);
    void displayInfo();
};

#endif