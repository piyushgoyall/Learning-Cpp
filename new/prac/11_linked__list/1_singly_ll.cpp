#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPos(Node *&tail, Node *&head, int pos, int d)
{
    // insert at head
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    // insert at tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int pos, Node *&head)
{
    // deleting first or start node
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory free start node
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt <= pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = nullptr;
        delete curr;
    }
}

int main()
{
    // created a new node

    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;

    Node *tail = node1;

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPos(tail, head, 4, 22);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    deleteNode(2, head);
    print(head);
    cout << head->data << endl;
    cout << tail->data << endl;

    return 0;
}