// Insertion in a BST

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
        data = 0;
        right = NULL;
        left = NULL;
    }

    Node(int val)
    {
        this->data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BST
{
private:
    Node *root;

public:
    BST()
    {
        root = nullptr;
    }

    BST(int val)
    {
        root = new Node(val);
    }

    Node *getRoot()
    {
        return root;
    }

    void insertNode(int val)
    {
        if (root == nullptr)
        {
            Node *newNode = new Node(val);
            root = newNode;
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
            {
                curr = curr->right;
            }
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

    void inOrderPrint(Node *currentNode)
    {
        if (currentNode != NULL)
        {
            inOrderPrint(currentNode->left);
            cout << currentNode->data << " ";
            inOrderPrint(currentNode->right);
        }
    }
};

int main()
{
    BST tree(13);
    tree.insertNode(4);
    tree.insertNode(7);
    tree.insertNode(16);
    tree.insertNode(19);
    tree.insertNode(3);
    tree.insertNode(1);
    tree.insertNode(9);
    tree.insertNode(2);

    cout << "InOrderTraversal" << endl;
    tree.inOrderPrint(tree.getRoot());

    return 0;
}
