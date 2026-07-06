#if !defined(STACK_)
#define STACK_

#include <string>

struct Customer
{
    std::string full_name;
    double payment;
};

typedef Customer Item;

class Stack
{
private:
    static const int MAX = 10;
    Item items[MAX];
    int top;

public:
    Stack();
    ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    void push(const Item &);
    Item &pop();
};

#endif // STACK_
