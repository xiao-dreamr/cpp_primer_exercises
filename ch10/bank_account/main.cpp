#include "bank_account.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    Account person1 = {"小明", 1, 11.4514};
    Account person2 = {"小红", 2, 1919.810};
    person1.displayInfo();
    person2.displayInfo();
    std::cout << "现小红取出200元给小明：\n";
    person1.save(200);
    person2.withdraw(200);
    person1.displayInfo();
    person2.displayInfo();
    return 0;
}
