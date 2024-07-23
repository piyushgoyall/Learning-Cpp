// Implement Stack using a Linked list

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
    int size;

public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    bool isEmpty()
    {
        return (head == nullptr ? true : false);
    }

    int getHead()
    {
        if (isEmpty())
            return -1;
        return head->data;
    }

    int getSize()
    {
        return size;
    }

    void insert(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    int del()
    {
        if (isEmpty())
        {
            return -1;
        }
        int val;
        if (head->next == nullptr)
        {
            val = head->data;
            delete head;
            return val;
        }
        Node *temp = head;
        val = head->data;
        head = head->next;
        delete temp;
        size--;
        return val;
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Null" << endl;
        }
        Node *curr = head;
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    ~LinkedList()
    {
        if (isEmpty())
        {
            return;
        }
        Node *temp = head;
        while (temp != nullptr)
        {
            head = head->next;
            delete temp;
            temp = head;
        }
    }
};

class Stack
{
private:
    LinkedList ll;

public:
    bool isEmpty()
    {
        if (ll.isEmpty())
            return true;
        return false;
    }

    int getSize()
    {
        return ll.getSize();
    }

    void push(int val)
    {
        ll.insert(val);
    }

    int pop()
    {
        return ll.del();
    }

    void print()
    {
        ll.print();
    }
};

int main()
{
    Stack st;
    cout << st.isEmpty() << endl;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(1);
    st.print();
    cout << st.pop() << endl;
    st.print();

    return 0;
}