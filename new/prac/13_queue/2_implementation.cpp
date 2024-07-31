// Implement queue using Linked List

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = nullptr;
    }

    Node(int val)
    {
        this->data = val;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    bool isEmpty()
    {
        return (head == nullptr);
    }

    void insertTail(int val)
    {
        Node *temp = new Node(val);
        if (isEmpty())
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    int deleteHead()
    {
        if (isEmpty())
            return -1;

        Node *temp = head;
        head = head->next;
        if (head == nullptr)
        {
            tail = nullptr;
        }
        int val = temp->data;
        delete temp;
        return val;
    }

    int getHead()
    {
        if (isEmpty())
        {
            return -1;
        }
        return head->data;
    }

    void printList()
    {
        if (isEmpty())
        {
            cout << "Empty Queue!!" << endl;
            return;
        }
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

class Queue
{
private:
    LinkedList qu;

public:
    bool isEmpty()
    {
        return qu.isEmpty();
    }

    void enqueue(int val)
    {
        qu.insertTail(val);
    }

    int dequeue()
    {
        return qu.deleteHead();
    }

    int getFront()
    {
        return qu.getHead();
    }

    void print()
    {
        qu.printList();
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.print();
    return 0;
}