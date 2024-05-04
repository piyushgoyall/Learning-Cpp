#include <bits/stdc++.h>
using namespace std;
int main()
{
    // creating a stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop
    s.pop();

    cout << "Printing top element : " << s.top() << endl;

    if (s.empty())
    {
        cout << "stack is empty: " << endl;
    }

    else
    {
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of stack is : " << s.size() << endl;

    return 0;
}