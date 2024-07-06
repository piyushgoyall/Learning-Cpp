#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
class Stack
{
private:
    int maxSize;
    int top;
    T *array;

public:
    Stack(int size) : maxSize(size), top(-1)
    {
        array = new T[size];
    }

    ~Stack()
    {
        delete[] array;
    }

    bool IsEmpty()
    {
        return top == -1;
    }

    bool IsFull()
    {
        return top == maxSize - 1;
    }

    T Top()
    {
        if (IsEmpty())
            throw runtime_error("Stack is empty");
        return array[top];
    }

    void Push(T value)
    {
        if (IsFull())
            throw runtime_error("Stack is full");
        array[++top] = value;
    }

    T Pop()
    {
        if (IsEmpty())
            throw runtime_error("Stack is empty");
        return array[top--];
    }
};

int main()
{
    int size = 5;
    Stack<int> **arrayOfStacks = new Stack<int> *[size];

    for (int i = 0; i < size; i++)
    {
        arrayOfStacks[i] = new Stack<int>(10);
    }

    // Push elements into the stacks
    arrayOfStacks[0]->Push(10);
    arrayOfStacks[0]->Push(20);
    arrayOfStacks[1]->Push(30);
    arrayOfStacks[2]->Push(40);
    arrayOfStacks[2]->Push(50);
    arrayOfStacks[2]->Push(60);

    // Pop and print elements from the stacks
    for (int i = 0; i < size; i++)
    {
        cout << "Stack " << i << ": ";
        while (!arrayOfStacks[i]->IsEmpty())
        {
            cout << arrayOfStacks[i]->Pop() << " ";
        }
        cout << endl;
    }

    // Free up space
    for (int i = 0; i < size; i++)
    {
        delete arrayOfStacks[i];
    }
    delete[] arrayOfStacks;

    return 0;
}
