// Recursive search in BST

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

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

    bool isEmpty()
    {
        return root == nullptr;
    }

    Node *insertNode(Node *curr, int val)
    {
        if (curr == nullptr)
            return new Node(val);

        else if (curr->data > val)
            curr->left = insertNode(curr->left, val);

        else
            curr->right = insertNode(curr->right, val);

        return curr;
    }

    void insert(int val)
    {
        // if (getRoot() == nullptr)
        // {
        //     root = new Node(val);
        //     return;
        // }

        insertNode(root, val);
    }

    Node *searchRec(Node *curr, int val)
    {
        if (curr == nullptr)
            return nullptr;

        else if (curr->data == val)
            return curr;

        else if (val < curr->data)
            return searchRec(curr->left, val);

        else
            return searchRec(curr->right, val);
    }

    bool search(int val)
    {
        return (searchRec(root, val) != nullptr);

        // Node *temp = searchRec(this->getRoot(), val);
        // if (temp != nullptr)
        //     return true;
        // else
        //     return false;
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
    newBST.insert(3);
    newBST.insert(45);
    newBST.insert(53624);
    newBST.printInorder(newBST.getRoot());
    cout << endl;

    cout << (newBST.search(3) ? "Found" : "Not Found") << endl;
    return 0;
}