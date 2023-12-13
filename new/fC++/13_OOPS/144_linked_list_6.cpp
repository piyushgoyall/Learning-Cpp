// Reverse a linked list (recursive way).
// O(n) complexity.

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

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node *reverse(Node *&head)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    Node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

Node *reverseRecursive(Node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

bool Search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(Node *&head)
{
    Node *todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(Node *&head, int val)
{

    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    Node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    // disay(headpl);
    insertAtTail(head, 4);
    display(head);
    // cout << Search(head, 5) << endl;

    // // deletion(head, 1);
    // deleteAtHead(head);
    // display(head);

    Node *newhead = reverseRecursive(head);
    display(newhead);

    return 0;
}
