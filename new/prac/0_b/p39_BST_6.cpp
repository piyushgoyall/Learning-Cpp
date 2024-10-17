// Delete Node in BST

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

    void insertNode(Node *root, int val)
    {
        if (root == nullptr)
        {
            root = new Node(val);
            return;
        }

        Node *temp;
        Node *curr = root;
        while (curr != nullptr)
        {
            temp = curr;
            if (val < curr->data)
                curr = curr->left;
            else
                curr = curr->right;
        }

        if (val < temp->data)
        {
            temp->left = new Node(val);
        }
        else
            temp->right = new Node(val);
    }

    void insert(int val)
    {
        insertNode(root, val);
    }

    Node *search(int val)
    {
        Node *curr = root;
        while (curr != nullptr && curr->data != val)
        {
            if (curr->data > val)
                curr = curr->left;

            else
                curr = curr->right;
        }
        return curr;
    }

    Node *delNode(Node* root,int val)
    {
        if(root==nullptr)
            return nullptr;

        Node *curr = root;
        Node *temp;
        while(curr!=nullptr && curr->data!=val)
        {
            temp = curr;
            if()
        }
    }

    void delete(int val)
    {
        delNode(root, val);
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
    makeBST b(12);
    b.insert(432);
    b.insert(524);
    b.insert(7467);
    b.printInorder(b.getRoot());
    cout << endl;
    cout << (b.search(432) ? "Found" : "Not Found") << endl;

    return 0;
}
