// Linked List Implementation Of Queues.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        Node *n = new Node(x);
        if (front == NULL)
        {
            back = n;
            front = n;
        }
        back->next = n;
        back = n;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        Node *todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "No Element In Queue" << endl;
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();

    cout << q.empty() << endl;

    return 0;
}