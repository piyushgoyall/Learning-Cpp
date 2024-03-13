// Linked List
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    Node *getHead()
    {
        return head;
    }

    bool isEmpty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }

    int getLength()
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }

    void printList()
    {
        if (isEmpty())
            cout << "Empty List";
        Node *it = head;
        cout << "List: ";
        while (it != NULL)
        {
            cout << it->val << " --> ";
            it = it->next;
        }
        cout << "NULL";
    }

    void insertAtHead(int data)
    {
        Node *n = new Node();
        n->val = data;
        n->next = head;
        head = n;
    }

    void insertAtTail(int data)
    {
        Node *n = new Node();
        n->val = data;
        n->next = NULL;

        if (head == NULL)
        {
            head = n;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = n;
        }
    }

    void insertAt(int data, int pos)
    {
        if (isEmpty())
        {
            insertAtHead(data);
            return;
        }
        else
        {
            Node *temp = new Node();
            temp->val = data;
            int count = 1;
            Node *idx = head;

            while (idx->next != NULL)
            {
                if (count + 1 == pos)
                {
                    Node *prev = idx->next;
                    idx->next = temp;
                    temp->next = prev;
                    return;
                }
                else
                {
                    count++;
                    idx = idx->next;
                }
            }

            // If pos is at the end of the list
            if (count + 1 == pos)
            {
                idx->next = temp;
                temp->next = NULL;
            }
        }
    }

    // void insertAt(int data, int pos)
    // {
    //     if (isEmpty())
    //     {
    //         insertAtHead(data);
    //         return;
    //     }
    //     else
    //     {
    //         Node *temp = new Node();
    //         temp->val = data;
    //         int count = 1;
    //         Node *idx = head;

    //         if (pos == 1)
    //         {
    //             temp->next = head;
    //             head = temp;
    //             return;
    //         }

    //         while (idx->next != NULL)
    //         {
    //             if (count == pos - 1)
    //             {
    //                 Node *prev = idx->next;
    //                 idx->next = temp;
    //                 temp->next = prev;
    //                 return;
    //             }
    //             else
    //                 count++;

    //             idx = idx->next;
    //         }

    //         // while (count != pos)
    //         // {
    //         //     idx = idx->next;
    //         //     count++;
    //         // }
    //         // Node *prev = idx->next;
    //         // idx->next = temp;
    //         // temp->next = prev;
    //         // return;
    //     }
    // }

    void deleteHead()
    {
        if (head == nullptr || head->next == nullptr)
        {
            delete head;
            return;
        }
        Node *curr = head;
        head = head->next;

        delete curr;
    }

    // void deleteHead()
    // {
    //     if (isEmpty())
    //     {
    //         cout << "Empty List" << endl;
    //         return;
    //     }
    //     Node *curr = head;
    //     head = head->next;

    //     delete curr;
    // }

    void deleteTail()
    {
        if (head == nullptr || head->next == nullptr)
        {
            delete head;
            return;
        }
        // if (isEmpty())
        // {
        //     cout << "List empty" << endl;
        //     return;
        // }
        Node *curr = head;
        while (curr->next->next != NULL)
        {
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->next = nullptr;
        delete temp;
    }

    void deleteVal(int val)
    {
        if (isEmpty())
        {
            cout << "Empty List" << endl;
            return;
        }

        Node *curr = head;
        while (curr != NULL)
        {
            if ((curr->next->val) == val)
            {
                Node *temp = curr->next;
                curr->next = curr->next->next;

                delete temp;
                return;
            }
            curr = curr->next;
        }
        delete head;
    }

    void reverse()
    {
        if (isEmpty())
        {
            cout << "Empty List" << endl;
            return;
        }
        Node *rev = head;
        while (rev != nullptr)
        {
            insertAtHead(rev->val);
            rev = rev->next;
        }
        printList();
        cout << endl;
    }
};

int main()
{
    LinkedList l1;
    // cout << l1.getHead() << endl;
    // cout << l1.isEmpty() << endl;
    l1.insertAtHead(4);
    l1.insertAtTail(5);
    l1.insertAtHead(3);
    l1.insertAtHead(2);
    l1.insertAtHead(1);
    l1.insertAtHead(0);

    l1.deleteVal(3);
    // l1.deleteHead();
    // // l1.insertAtTail(6);
    // // l1.insertAtTail(7);
    // // l1.insertAtTail(8);

    // l1.insertAt(99, 3);
    // l1.deleteHead();
    // // l1.deleteHead();
    // // l1.deleteHead();
    // // l1.deleteHead();
    // // l1.deleteHead();
    // // l1.deleteHead();
    // l1.deleteVal(99);
    // l1.deleteTail();
    l1.printList();
    // cout << endl;
    // cout << l1.getLength();
    // cout << endl;
    // l1.reverse();
    return 0;
}