// Priority Queue using Linked List

#include <bits/stdc++.h>
using namespace std;

struct Element
{
    int value;
    int priority;
    Element *next;

    Element(int v, int p)
    {
        value = v;
        priority = p;
        next = NULL;
    }
};

int getValue(Element *head)
{
    return head->value;
}

Element *remove(Element *head)
{
    Element *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Element *insert(Element *head, int v, int p)
{
    Element *current = head;
    Element *newNode = new Element(v, p);

    if (head == NULL || head->priority > p)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        while (current->next != NULL && current->next->priority < p)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    return head;
}

int isEmpty(Element *head)
{
    return (head == NULL);
}

int main()
{
    Element *pq = new Element(4, 1);

    pq = insert(pq, 5, 2);
    pq = insert(pq, 6, 3);
    pq = insert(pq, 7, 0);

    while (!isEmpty(pq))
    {
        cout << " " << getValue(pq);
        pq = remove(pq);
    }
    return 0;
}
