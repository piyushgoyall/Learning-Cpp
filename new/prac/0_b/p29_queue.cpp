// Implement queue using doubly linked list

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        next = nullptr;
        prev = nullptr;
    }

    Node(int val)
    {
        this->data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class Dll
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    Dll()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    bool isEmpty()
    {
        if (head == nullptr)
            return true;
        return false;
    }

    int getHead()
    {
        if (isEmpty())
            return -1;
        else
            return head->data;
    }

    int getSize()
    {
        return size;
    }

    void insertTail(int val)
    {
        Node *neww = new Node(val);
        if (isEmpty())
        {
            head = neww;
            tail = neww;
        }
        else
        {
            neww->prev = tail;
            tail->next = neww;
            tail = neww;
        }
        size++;
    }

    int delHead()
    {
        if (isEmpty())
            return -1;
        int val;
        if (size == 1)
        {
            val = head->data;
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            val = head->data;
            Node *temp = head;
            head = head->next;
            head->prev = nullptr;
            temp->next = nullptr;
            delete temp;
        }
        size--;
        return val;
    }

    void print()
    {
        if (isEmpty())
            return;
        Node *curr = head;
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }

    ~Dll()
    {
        Node *current = head;
        Node *next;
        while (current)
        {
            next = current->next;
            delete current;
            current = next;
        }
    }
};

class Queue
{
private:
    Dll ll;

public:
    bool isEmpty()
    {
        return (ll.isEmpty());
    }

    int getSize()
    {
        return ll.getSize();
    }

    int getFront()
    {
        return ll.getHead();
    }

    void enqueue(int val)
    {
        ll.insertTail(val);
    }

    int dequeue()
    {
        int val = ll.delHead();
        return val;
    }

    void print()
    {
        ll.print();
        cout << endl;
    }
};

int main()
{
    Queue q1;
    cout << q1.isEmpty() << endl;
    cout << q1.getFront() << endl;
    cout << q1.getSize() << endl;

    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(7);

    q1.print();
    cout << q1.isEmpty() << endl;
    cout << q1.getFront() << endl;
    cout << q1.getSize() << endl;

    cout << q1.dequeue() << endl;
    q1.print();
    cout << q1.isEmpty() << endl;
    cout << q1.getFront() << endl;
    cout << q1.getSize() << endl;

    return 0;
}
