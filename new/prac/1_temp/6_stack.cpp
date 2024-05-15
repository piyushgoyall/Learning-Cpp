#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int capacity;

public:
    // Constructor to initialize stack
    Stack(int size)
    {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    // Destructor to free memory allocated to the stack
    ~Stack()
    {
        delete[] arr;
    }

    // Utility function to add an element `x` to the stack
    void push(int x)
    {
        if (isFull())
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    // Utility function to pop a top element from the stack
    int pop()
    {
        // Check for stack underflow
        if (isEmpty())
        {
            cout << "Stack Underflow\n";
            return -1;
        }

        // Decrease stack size by 1 and (optionally) return the popped element
        return arr[top--];
    }

    // Utility function to return the top element of the stack
    int peek()
    {
        if (!isEmpty())
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty\n";
            return -1;
        }
    }

    // Utility function to return the size of the stack
    int size()
    {
        return top + 1;
    }

    // Utility function to check if the stack is empty or not
    bool isEmpty()
    {
        return top == -1;
    }

    // Utility function to check if the stack is full or not
    bool isFull()
    {
        return top == capacity - 1;
    }
};

int main()
{
    Stack stack(3);

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element is: " << stack.peek() << endl;
    cout << "Stack size is " << stack.size() << endl;

    stack.pop();
    stack.pop();
    stack.pop();

    if (stack.isEmpty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Stack is not empty\n";
    }

    return 0;
}
