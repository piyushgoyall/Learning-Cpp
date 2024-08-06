// Directed graph

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    bool isEmpty()
    {
        return (head == nullptr);
    }

    Node *getHead()
    {
        return head;
    }

    void printList()
    {
        if (isEmpty())
            return;

        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void insertAtHead(int val)
    {
        Node *temp = new Node();
        temp->data = val;
        temp->next = head;
        head = temp;
    }

    void insertAtTail(int val)
    {
        if (isEmpty())
        {
            insertAtHead(val);
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        Node *tail = new Node();
        tail->data = val;
        tail->next = nullptr;
        temp->next = tail;
    }

    bool search(int val)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            if (temp->data == val)
                return true;
            temp = temp->next;
        }
        return false;
    }

    bool delHead(int val)
    {
        if (isEmpty())
        {
            return false;
        }

        if (head->data == val)
        {
            Node *temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
            return true;
        }
        return false;
    }

    bool delVal(int val)
    {
        if (isEmpty())
        {
            return false;
        }

        if (head->data == val)
        {
            delHead(val);
            return true;
        }

        Node *temp = head;
        Node *prev = nullptr;
        while (temp != nullptr)
        {
            if (temp->data == val)
            {
                prev->next = temp->next;
                temp->next = nullptr;
                delete temp;
                return true;
            }
            prev = temp;
            temp = temp->next;
        }
        return false;
    }
};

class Graph
{
private:
    int vertices;
    LinkedList *array;

public:
    Graph(int val)
    {
        vertices = val;
        array = new LinkedList[val];
    }

    void addEdge(int source, int destination)
    {
        if (source < vertices && destination < vertices)
        {
            array[source].insertAtHead(destination);
        }
    }

    void printGraph()
    {
        Node *curr;
        for (int i = 0; i < vertices; i++)
        {
            cout << "|" << i << "| -> ";
            curr = (array[i]).getHead();
            while (curr != nullptr)
            {
                cout << curr->data << " -> ";
                curr = curr->next;
            }
            cout << "NULL" << endl;
        }
    }

    LinkedList *getArray()
    {
        return array;
    }

    int getVertices()
    {
        return vertices;
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(3, 1);
    g.addEdge(2, 0);
    g.addEdge(4, 1);
    g.addEdge(4, 2);
    g.addEdge(4, 0);
    g.printGraph();

    // Use getArray() to get the array of LinkedLists
    LinkedList *array = g.getArray();
    int vertices = g.getVertices();

    // Print adjacency list for each vertex
    for (int i = 0; i < vertices; i++)
    {
        cout << "Vertex " << i << ": ";
        Node *curr = array[i].getHead();
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    return 0;
}