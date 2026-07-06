#include "stack.hpp"

Stack::Stack()
{
    top = 0;
}

Stack::~Stack()
{
}

bool Stack::isEmpty() const
{
    return top == 0;
}

bool Stack::isFull() const
{
    return top == MAX;
}

void Stack::push(const Item &item)
{
    if (isFull())
    {
        return;
    }

    items[top] = item;
    top++;
}

Item &Stack::pop()
{
    if (isEmpty())
    {
        throw 0;
    }
    return items[--top];
}