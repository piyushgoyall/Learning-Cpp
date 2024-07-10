// Search in a BST

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        left = nullptr;
        right = nullptr;
    }
};

class makeBST
{
private:
    Node *root;

public:
    makeBST()
    {
        root = nullptr;
    }

    makeBST(int val)
    {
        root = new Node(val);
    }

    Node *getRoot()
    {
        return root;
    }

    void Insert(int val)
    {
        if (getRoot() == nullptr)
        {
            root = new Node(val);
            return;
        }

        Node *curr = root;
        Node *temp;

        while (curr != nullptr)
        {
            temp = curr;
            if (val < curr->data)
            {
                curr = curr->left;
            }
            else
                curr = curr->right;
        }

        if (val < temp->data)
        {
            temp->left = new Node(val);
        }
        else
        {
            temp->right = new Node(val);
        }
    }

    void print(Node *curr)
    {
        if (curr != nullptr)
        {
            print(curr->left);
            cout << curr->data << " ";
            print(curr->right);
        }
    }

    Node *Search(int val)
    {
        Node *curr = root;
        while (curr != nullptr && (curr->data != val))
        {
            if (val < curr->data)
                curr = curr->left;
            else
                curr = curr->right;
        }

        return curr;
    }
};

int main()
{
    makeBST B(13);
    B.Insert(2);
    B.Insert(34543);
    B.Insert(34);
    B.print(B.getRoot());
    cout << endl;
    Node *ans = B.Search(2);
    if (ans != nullptr)
        cout << "Value Found" << endl;
    else
    {
        cout << "Value Not Found" << endl;
    }
    return 0;
}