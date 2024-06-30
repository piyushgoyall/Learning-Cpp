// Stack implementation using array.

#include <bits/stdc++.h>
using namespace std;

class myStack
{
private:
    int *arr;
    int capacity;
    int numEle;

public:
    myStack(int size)
    {
        arr = new int[size];
        capacity = size;
        numEle = 0;
    }

    bool isEmpty()
    {
        return (numEle == 0);
    }

    int getTop()
    {
        return (numEle == 0 ? -1 : arr[numEle - 1]);
    }

    int size()
    {
        return numEle;
    }

    void push(int val)
    {
        if (numEle < capacity)
        {
            arr[numEle] = val;
            numEle++;
            cout << "" << val << " pushed into the stack." << endl;
        }
        else
        {
            cout << "Stack Overflow" << endl;
            return;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        numEle--;
        return arr[numEle - 1];
    }

    void print()
    {
        int i = 0;
        while (i < numEle)
        {
            cout << arr[numEle - i - 1] << " ";
            i++;
        }
        cout << endl;
    }
};

int main()
{
    myStack st(10);
    cout << st.getTop() << endl;
    cout << st.isEmpty() << endl;
    cout << st.size() << endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.print();
    st.pop();
    st.print();

    return 0;
}