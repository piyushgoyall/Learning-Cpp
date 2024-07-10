// Recursive Insertion in BST

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node()
    {
        left = nullptr;
        right = nullptr;
    }

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

    Node *insRec(Node *curr, int val)
    {
        if (curr == nullptr)
        {
            root = new Node(val);
            return root;
        }

        else if (curr->data > val)
            curr->left = insRec(curr->left, val);
        else
            curr->right = insRec(curr->right, val);

        return curr;
    }

    void insert(int val)
    {
        if (getRoot() == nullptr)
        {
            root = new Node(val);
        }

        insRec(this->getRoot(), val);
    }

    void printInorder(Node *curr)
    {
        if (curr != nullptr)
        {
            printInorder(curr->left);
            cout << curr->data << " ";
            printInorder(curr->right);
        }
    }
};

int main()
{
    makeBST newBST(13);
    newBST.insert(4);
    newBST.insert(32);
    newBST.insert(623);
    newBST.printInorder(newBST.getRoot());
    cout << endl;
    return 0;
}