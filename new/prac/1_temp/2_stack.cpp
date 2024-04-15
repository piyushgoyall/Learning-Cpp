// Stack

#include <iostream>
#include <stack>
#include<cassert>

using namespace std;
class myStack
{
private:
    int *stackArr;
    int capacity;
    int numElements;

public:
    myStack(int size)
    {
        capacity = size;
        stackArr = new int[size];
        assert(stackArr != NULL);
        numElements = 0;
    }

    bool isEmpty()
    {
        return (numElements == 0);
    }

    int getTop()
    {
        return (numElements == 0 ? -1 : stackArr[numElements - 1]);
    }

    bool push(int value)
    {
        if (numElements < capacity)
        {
            stackArr[numElements] = value;
            numElements++;
            return true;
        }
        else
        {
            cout << "Stack Full." << endl;
            return false;
        }
    }

    int pop()
    {
        if (numElements == 0)
        {
            cout << "Stack Empty" << endl;
            return -1;
        }
        else
        {
            numElements--;
            return stackArr[numElements];
        }
    }

    int getSize()
    {
        return numElements;
    }
    
    void showStack()
    {
        int i = 0;
        while (i < numElements)
        {
            cout << '\t' << stackArr[numElements - 1 - i];
            i++;
        }
        cout << '\n';
    }

};

int main()
{

    myStack s(10);
    cout << "\ns.top(): " << s.getTop();
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);
    cout << "\nThe stack is: ";
    s.showStack();
    cout << "\ns.top(): " << s.getTop();
    cout << "\ns.pop(): " << s.pop() << endl;
    cout << "\ns.pop(): " << s.pop() << endl;
    cout << "\ns.pop(): " << s.pop() << endl;
    cout << "\ns.pop(): " << s.pop() << endl;
    s.push(23);
    s.push(57);
    s.push(17);
    s.push(29);
    s.push(6);
    s.push(7);
    s.push(12);
    s.push(19);
    cout << "\nThe stack is: ";
    s.showStack();
    cout << "\ns.pop(): " << s.pop() << endl;
    cout << "s.pop(): " << s.pop() << endl;
    cout << "The stack size is: " << s.getSize() << endl;
    return 0;
}