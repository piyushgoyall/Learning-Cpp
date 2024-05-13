#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPos(Node *&tail, Node *&head, int pos, int d)
{
    // insert at head
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    // insert at tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int pos, Node *&head)
{
    // deleting first or start node
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory free start node
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = nullptr;
        delete curr;
    }
}

bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
        // cycle is present
        if (visited[temp] == true)
        {
            cout << "Present on element: " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            cout << "Cycle Present At: " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

Node *startingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *intersection = floydDetectLoop(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *startOfLoop = startingNode(head);
    Node *temp = startOfLoop;

    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int length(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

Node *mergeSortedLists(Node *l1, Node *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    Node *mergedHead = NULL;
    Node *temp = NULL;

    if (l1->data <= l2->data)
    {
        mergedHead = l1;
        l1 = l1->next;
    }
    else
    {
        mergedHead = l2;
        l2 = l2->next;
    }

    temp = mergedHead;

    while (l1 != NULL && l2 != NULL)
    {
        if (l1->data <= l2->data)
        {
            temp->next = l1;
            l1 = l1->next;
        }
        else
        {
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }

    if (l1 != NULL)
        temp->next = l1;
    if (l2 != NULL)
        temp->next = l2;

    return mergedHead;
}

int main()
{
    // created a new node

    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;

    Node *tail = node1;

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPos(tail, head, 4, 22);
    print(head);

    tail->next = head->next;

    cout << head->data << endl;
    cout << tail->data << endl;

    if (floydDetectLoop(head))
    {
        cout << "Cycle present" << endl;
    }
    else
    {
        cout << "No cycle" << endl;
    }

    // deleteNode(2, head);
    // print(head);
    // cout << head->data << endl;
    // cout << tail->data << endl;

    Node *loop = startingNode(head);
    cout << "Loop starting at: " << loop->data << endl;

    removeLoop(head);
    print(head);

    // Calculate the length of the linked list
    cout << "Length of the linked list: " << length(head) << endl;

    // Reverse the linked list
    head = reverse(head);
    cout << "Reversed linked list: ";
    print(head);

    // Merge two sorted linked lists
    Node *l1 = new Node(1);
    insertAtTail(l1, 3);
    insertAtTail(l1, 5);
    Node *l2 = new Node(2);
    insertAtTail(l2, 4);
    insertAtTail(l2, 6);
    cout << "Merged sorted linked lists: ";
    print(mergeSortedLists(l1, l2));

    return 0;
}
