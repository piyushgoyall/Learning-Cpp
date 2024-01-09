// Flatten a binary tree
/*
    Problem: Given a binary tree, flatten it into linked list inplace. After flattening, left of each node should point to NULL
    and right should contain next node in preorder sequence.
    (It's nomt allowed to use other data structures).

    Strategy:   1) Recursively ,flatten the left & right subtrees.
                2) Store the left tail (last element in left subtree) & right tail (last element in right subtree)
                3) Store right subtree in 'temp' & make left subtree as right subtree.
                4) Join right subtree with left tail.
                5) Return right tail.
*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

/*
        4
      /   \
     9     5
    / \      \
   1   3      6
*/

void flatten(Node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    if (root->left != NULL)
    {
        flatten(root->left);

        Node *temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node *t = root->right;
        while (t->right != NULL)
        {
            t = t->right;
        }

        t->right = temp;
    }
    flatten(root->right);
}

void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main()
{
    Node *root = new Node(4);
    root->left = new Node(9);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    // flatten
    flatten(root);
    inorderPrint(root);
    cout << endl;

    return 0;
}