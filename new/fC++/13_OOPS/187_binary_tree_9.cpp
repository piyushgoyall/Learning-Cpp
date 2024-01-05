// Height And Diameter In Binary Tree.
// Height :- It is the depth of the tree's deepest node

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

/*
        1
      /   \
     2     3
    / \   / \
   4   5 6   7
*/

int calHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lHeight = calHeight(root->left);
    int rHeight = calHeight(root->right);
    return max(lHeight, rHeight) + 1;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Height of Binary Tree
    cout << calHeight(root) << "\n";
    return 0;
}