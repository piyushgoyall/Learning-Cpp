#include <iostream>

using namespace std;

class Node
{
public:
    int data;          // Data to store (could be int,string,object etc)
    Node *nextElement; // Pointer to next element
    Node *previousElement;

    Node(int data)
    {
        // Constructor to initialize nextElement of newlyCreated Node
        this->data = data;
        nextElement = nullptr;
        previousElement = nullptr;
    }
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    int size;
    DoublyLinkedList();
    ~DoublyLinkedList();
    bool isEmpty();
    int getHead();
    int getTail();
    int printList();
    int insertTail(int value);
    bool deleteHead();
};

DoublyLinkedList::DoublyLinkedList()
{
    // Doubly linkedlist constructor
    head = nullptr;
    tail = nullptr;
    size = 0;
}

DoublyLinkedList::~DoublyLinkedList()
{
    // Doubly linkedlist destructor
    Node *current = head;
    Node *next;
    while (current)
    {
        next = current->nextElement;
        delete current;
        current = next;
    }
}

bool DoublyLinkedList::isEmpty()
{                        // check if the list is empty
    if (head == nullptr) // Check whether the head points to null
    {
        return true;
    }
    else
    {
        return false;
    }
}

int DoublyLinkedList::getHead()
{
    if (!(isEmpty()))
    {
        return head->data;
    }
    else
    {
        return -1;
    }
}

int DoublyLinkedList::getTail()
{
    if (!(isEmpty()))
    {
        return tail->data;
    }
    else
    {
        return -1;
    }
}

int DoublyLinkedList::printList()
{ // printing all elements of the list
    if (isEmpty())
    {
        cout << "List is Empty!" << endl;
        return false;
    }
    Node *temp = head; // temp points to head of the list
    cout << "List : ";

    while (temp != nullptr)
    { // traverse through the list
        cout << temp->data << "->";
        temp = temp->nextElement;
    }
    cout << "null " << endl;
    return true;
}

int DoublyLinkedList::insertTail(int value)
{ // insert value at tail
    Node *newNode = new Node(value);
    if (isEmpty())
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->previousElement = tail;
        tail->nextElement = newNode;
        tail = newNode;
    }
    size++;

    return tail->data;
}

bool DoublyLinkedList::deleteHead()
{
    bool deleted = false;
    if (this->isEmpty())
    {
        cout << "List is Empty" << endl;
        return deleted;
    }
    Node *nodeToRemove = head;

    if (size == 1)
    {
        head = nullptr;
        tail = nullptr;
    }
    else
    {
        head = head->nextElement;

        head->previousElement = nullptr;
        nodeToRemove->nextElement = nullptr;
    }
    delete nodeToRemove;
    size--;
    return true;
}

class myQueue
{
private:
    DoublyLinkedList items;

public:
    myQueue()
    {
        cout << "Queue created" << endl;
    }

    int isEmpty()
    {
        return items.size == 0;
    }

    int getFront()
    {
        if (!(items.isEmpty()))
        {
            cout << "getFront(): " << items.getHead() << endl;
            return items.getHead();
        }
        else
        {
            return -1;
        }
    }

    int getSize()
    {
        return items.size;
    }

    int enqueue(int value)
    {
        return items.insertTail(value);
    }

    int dequeue()
    {
        return items.deleteHead();
    }

    int getTail()
    {
        if (!(items.isEmpty()))
        {
            cout << "getTail(): " << items.getTail() << endl;
            return items.getTail();
        }
        else
        {
            return -1;
        }
    }

    bool showqueue()
    {
        return items.printList();
    }
};

int main()
{
    myQueue q;
    for (int i = 1; i <= 5; i++)
    {
        q.enqueue(i); // inserting data in queue
        q.showqueue();
    }

    q.getFront();
    q.getTail();
    q.getSize(); // size of queue

    while (q.isEmpty() == false)
    {
        q.dequeue();
        // cout<< "Dequeue() " << endl;
    }
    q.showqueue();

    return 0;
}