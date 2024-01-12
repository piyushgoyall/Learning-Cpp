// Rule 1 : The left subtree of a node contains only nodes with keys lesser than the node's key.
// Rule 2 : The right subtree of a node contains only nodes with keys greater than the node's key.
// Rule 3 : The left and right subtree each must also be a binary search tree. There must be no duplicate nodes.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        // val > root->data
        root->right = insertBST(root->right, val);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    // print inorder
    inorder(root);
    cout << endl;
    return 0;
}