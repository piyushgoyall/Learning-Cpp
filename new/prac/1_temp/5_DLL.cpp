#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node(int data)
    {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    // Constructor
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    // Destructor
    ~DoublyLinkedList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
        tail = nullptr;
    }

    // Function to insert at the head of the list
    void insertAtHead(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Function to insert at the tail of the list
    void insertAtTail(int data)
    {
        Node *newNode = new Node(data);
        if (tail == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Function to print the list forward
    void printForward()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Function to print the list backward
    void printBackward()
    {
        Node *current = tail;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

    // Function to remove a node from the list
    void remove(int data)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->data == data)
            {
                if (current == head && current == tail)
                {
                    head = nullptr;
                    tail = nullptr;
                }
                else if (current == head)
                {
                    head = head->next;
                    head->prev = nullptr;
                }
                else if (current == tail)
                {
                    tail = tail->prev;
                    tail->next = nullptr;
                }
                else
                {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        }
        cout << "Element not found in the list!" << endl;
    }
};

int main()
{
    DoublyLinkedList dll;

    dll.insertAtHead(1);
    dll.insertAtHead(2);
    dll.insertAtTail(3);
    dll.insertAtTail(4);

    cout << "Doubly linked list forward: ";
    dll.printForward();
    cout << "Doubly linked list backward: ";
    dll.printBackward();

    dll.remove(2);

    cout << "After removing 2, Doubly linked list forward: ";
    dll.printForward();

    return 0;
}
