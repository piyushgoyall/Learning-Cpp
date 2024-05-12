#include <iostream>
using namespace std;

// Define a node class for the linked list
class Node
{
public:
    int data;
    Node *next;

    // Constructor to initialize data and next pointer
    Node(int data)
    {
        data = data;
        next = nullptr;
    }
};

// Function to insert a new node at the end of the linked list
void insert(Node *&head, int data)
{
    Node *newNode = new Node(data);

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr; // Initialize an empty linked list

    int n; // Number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
    {
        int element;
        cin >> element;
        insert(head, element);
    }

    cout << "Linked list elements: ";
    printList(head);

    // Free memory allocated for nodes
    Node *temp;
    while (head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
