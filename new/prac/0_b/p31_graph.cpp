#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *nextElement; // Pointer to next element
    Node();
};

Node::Node()
{
    // Constructor to initialize nextElement of newlyCreated Node
    nextElement = nullptr;
}

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    bool isEmpty();
    Node *getHead();
    bool printList();
    bool insertAtHead(int value);
    void insertAtTail(int value);
    bool search(int value);
    bool deleteAtHead(int value);
    bool Delete(int value);
};

LinkedList::LinkedList()
{
    head = nullptr;
}

bool LinkedList::isEmpty()
{
    if (head == nullptr) // Check whether the head points to null
        return true;
    else
        return false;
}

Node *LinkedList::getHead()
{
    return head;
}

bool LinkedList::printList()
{
    if (isEmpty())
    {
        cout << "List is Empty!";
        return false;
    }
    Node *temp = head;
    cout << "List : ";

    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->nextElement;
    }
    cout << "null " << endl;
    return true;
}

bool LinkedList::insertAtHead(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->nextElement = head; // Linking newNode to head's nextNode
    head = newNode;
    return true;
} 

void LinkedList::insertAtTail(int value)
{
    if (isEmpty())
    { // inserting first element in list
        insertAtHead(value);
    }
    else
    {
        Node *newNode = new Node();
        Node *last = head;

        while (last->nextElement != nullptr)
        {
            last = last->nextElement;
        }

        newNode->data = value;
        // cout << value << " Inserted!    ";
        newNode->nextElement = nullptr;
        last->nextElement = newNode;
    }
}

bool LinkedList::search(int value)
{ // function to check if element exists in list
    Node *temp = head;

    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            return true;
        }
        temp = temp->nextElement;
    }
    return false;
}

bool LinkedList::deleteAtHead(int value)
{

    bool deleted = false;
    if (isEmpty())
    {
        // cout << "List is Empty" << endl;
        return deleted;
    }
    // if list is not empty, start traversing it from the head
    Node *currentNode = head;
    Node *nextNode = head->nextElement; // nextNode point to head's nextElement

    if (currentNode->data == value)
    {
        currentNode = nextNode;
        head = currentNode;
        deleted = true;
        return deleted;
    }
    return deleted;
}

bool LinkedList::Delete(int value)
{
    bool deleted = false; // returns true if the node is deleted, false otherwise

    if (isEmpty())
    { // check if the list is empty
        // cout << "List is Empty" << endl;
        return deleted; // deleted will be false
    }

    // if list is not empty, start traversing it from the head
    Node *currentNode = head;     // currentNode to traverse the list
    Node *previousNode = nullptr; // previousNode starts from null

    if (currentNode->data == value)
    { // deleting value of head
        deleted = deleteAtHead(value);
        // cout << value << " deleted!" << endl;
        deleted = true; // true because value found and deleted
        return deleted; // returns true if the node is deleted
    }

    // Traversing/Searching for Node to Delete
    while (currentNode != nullptr)
    {

        // Node to delete is found
        if (value == currentNode->data)
        {
            // pointing previousNode's nextElement to currentNode's nextElement
            previousNode->nextElement = currentNode->nextElement;
            deleted = true;
            break;
        }
        previousNode = currentNode;
        currentNode = currentNode->nextElement; // pointing current to current's nextElement
    }
    // deleted is true only when value is found and delted
    if (deleted == false)
    {
        // cout << value << " does not exist!" << endl;
    }
    else
    {
        // cout << value << " deleted!" << endl;
    }
    return deleted;
} // end of delete()

class Graph
{
private:
    int vertices;
    LinkedList *array;

public:
    Graph(int v);

    void addEdge(int source, int destination);

    void printGraph();

    LinkedList *getArray();

    int getVertices();
};

Graph::Graph(int v)
{
    array = new LinkedList[v];
    vertices = v;
}

void Graph::addEdge(int source, int destination)
{
    if (source < vertices && destination < vertices)
    {
        array[source].insertAtHead(destination);
        array[destination].insertAtHead(source);
    }
}

void Graph::printGraph()
{
    cout << "Adjacency List of Undirected Graph" << endl;
    Node *temp;
    for (int i = 0; i < vertices; i++)
    {
        cout << "|" << i << "| => ";
        temp = (array[i]).getHead();

        while (temp != NULL)
        {
            cout << "[" << temp->data << "] -> ";
            temp = temp->nextElement;
        }
        cout << "NULL" << endl;
    }
}

LinkedList *Graph::getArray()
{
    return array;
}

int Graph::getVertices()
{
    return vertices;
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    cout << endl;
    g.printGraph();
    return 0;
}