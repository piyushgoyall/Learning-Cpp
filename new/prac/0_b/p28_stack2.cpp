#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
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

    void insertHead(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    int delHead()
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
            cout << "null ";
            return;
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
        print();
    }
};

class myStack
{
private:
    LinkedList st;

public:
    bool isEmpty()
    {
        if (st.isEmpty())
            return true;
        return false;
    }

    int getSize()
    {
        return st.getSize();
    }

    int getTop()
    {
        return st.getHead();
    }

    void push(int val)
    {
        st.insertHead(val);
    }

    int pop()
    {
        return st.delHead();
    }

    void print()
    {
        st.print();
    }

public:
};

int main()
{
    myStack st;
    cout << st.isEmpty() << endl;
    st.push(5);
    st.push(6);
    st.print();
    cout << st.pop() << endl;
    st.print();
    return 0;
}