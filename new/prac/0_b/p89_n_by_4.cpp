// Find the n / 4 - th last node in a singly linked list without computing its length.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

Node *findNthFourthFromEnd(Node *head, int n)
{
    if (n < 4)
        return nullptr;

    Node *slow = head;
    Node *fast = head;

    int steps = n / 4;
    for (int i = 0; i < steps; i++)
    {
        if (!fast)
            return nullptr;
        fast = fast->next;
    }

    while (fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

Node *createList(int n)
{
    if (n <= 0)
        return nullptr;

    cout << "Enter " << n << " node values: ";
    int val;
    cin >> val;
    Node *head = new Node(val);
    Node *curr = head;

    for (int i = 1; i < n; i++)
    {
        cin >> val;
        curr->next = new Node(val);
        curr = curr->next;
    }
    return head;
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main()
{
    int n;
    cout << "Enter the number of nodes in the linked list: ";
    cin >> n;

    Node *head = createList(n);

    cout << "Linked List: ";
    printList(head);

    Node *result = findNthFourthFromEnd(head, n);
    if (result)
        cout << "n/4-th last node: " << result->data << endl;
    else
        cout << "List too short!" << endl;

    return 0;
}
