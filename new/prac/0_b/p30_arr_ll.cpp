// Array of linked list
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList
{
public:
    Node *head;

    LinkedList() : head(nullptr) {}

    // Method to insert a node at the beginning of the list
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Method to print the linked list
    void printList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main()
{
    int size = 5;
    LinkedList *arrayOfLinkedLists = new LinkedList[size];

    // Insert elements into the linked lists
    arrayOfLinkedLists[0].insertAtBeginning(10);
    arrayOfLinkedLists[0].insertAtBeginning(20);
    arrayOfLinkedLists[1].insertAtBeginning(30);
    arrayOfLinkedLists[2].insertAtBeginning(40);
    arrayOfLinkedLists[2].insertAtBeginning(50);
    arrayOfLinkedLists[2].insertAtBeginning(60);

    // Print the linked lists
    for (int i = 0; i < size; i++)
    {
        cout << "Linked List " << i << ": ";
        arrayOfLinkedLists[i].printList();
    }

    // Clean up
    delete[] arrayOfLinkedLists;

    return 0;
}