// Queue Using Stack (Method 2)

#include <bits/stdc++.h>
#include <stack>
using namespace std;

class Queue
{
    stack<int> s1;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        if (s1.empty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
    }
    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }
        return false;
    }
};
int32_t main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.pop() << "\n";
    q.push(5);
    cout << q.pop() << "\n";
    cout << q.pop() << "\n";
    cout << q.pop() << "\n";
    cout << q.pop() << "\n";
    cout << q.pop() << "\n";
    return 0;
}