// Doubly linked list

#include <bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        next = nullptr;
        prev = nullptr;
    }
}

class Dll
{
    Node *head;
    Dll()
    {
        head = nullptr;
    }

    
}

int main()
{
    DoublyLinkedList list;
    for (int i = 1; i <= 5; i++)
    {
        list.insertAtHead(i); // inserting data in list
        list.printList();
    }

    list.Delete(1); // deleting 1 from the list
    list.printList();

    list.Delete(5); // deleting 5 from the list
    list.printList();

    list.Delete(3); // deleting 3 from the list
    list.printList();

    list.Delete(12);
    list.printList();

    return 0;
}