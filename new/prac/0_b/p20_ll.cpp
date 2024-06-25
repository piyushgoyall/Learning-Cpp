#include <iostream>
using namespace std;

template <class T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode *next;

    LinkedListNode(T data) : data(data), next(nullptr) {}
};

// Template for the linked list
template <class T>
class LinkedList
{
public:
    LinkedListNode<T> *head;
    // constructor will be used to make a LinkedList type object
    LinkedList() : head(nullptr) {}
    // The InsertNodeAtHead method will insert a LinkedListNode at head of a linked list.
    void InsertNodeAtHead(LinkedListNode<T> *node)
    {
        if (!head)
        {
            head = node;
        }
        else
        {
            node->next = head;
            head = node;
        }
    }
    // The CreateLinkedList method will create the linked list using the given integer array with the help of InsertAthead method.
    void CreateLinkedList(T lst[], int size)
    {
        for (int i = size - 1; i >= 0; i--)
        {
            LinkedListNode<T> *newNode = new LinkedListNode<T>(lst[i]);
            InsertNodeAtHead(newNode);
        }
    }
};

template <class T>
void PrintListWithForwardArrow(LinkedListNode<T> *head)
{
    LinkedListNode<T> *temp = head;

    while (temp)
    {
        cout << temp->data;
        temp = temp->next;
        if (temp)
        {
            cout << " -> ";
        }
    }
    cout << " -> nullptr ";
}

bool Delete(LinkedListNode<int> *head, int value)
{
    bool deleted = false;

    LinkedListNode<int> *current = head;
    LinkedListNode<int> *previous = nullptr;
    // Check if the value to delete is in the head node
    if (current->data == value)
    {
        head = current->next;
        delete current;
        deleted = true;
        return deleted;
    }
    // Traverse the linked list to find the node with the given value
    while (current)
    {
        if (current->data == value)
        { // If the value is found
            previous->next = current->next;
            delete current;
            deleted = true;
            break;
        }
        previous = current;
        current = current->next;
    }

    return deleted;
}

int main()
{
    int input[][10] = {
        {10, 20, 30, 40, 50},
        {-1, -2, -3, -4, -5, -6},
        {3, 2, 1},
        {12},
        {1, 2},
    };
    int sizes[] = {5, 6, 3, 1, 2};
    int values[] = {30, -8, 3, 12, 1};

    for (int i = 0; i < sizeof(input) / sizeof(input[0]); i++)
    {
        LinkedList<int> inputLinkedList;
        inputLinkedList.CreateLinkedList(input[i], sizes[i]);
        cout << (i + 1) << ".\tInput linked list: ";
        PrintListWithForwardArrow(inputLinkedList.head);
        cout << "\n\tValue to be deleted: " << values[i] << endl;
        cout << "\n\tResult: " << (Delete(inputLinkedList.head, values[i]) ? "true" : "false") << endl;
        cout << string(100, '-') << endl;
    }

    return 0;
}
