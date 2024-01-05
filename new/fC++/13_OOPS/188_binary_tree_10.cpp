// Diameter Of A Binary Tree
// Number of ndoes in the longest path between any 2 levels.

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

    return max(calHeight(root->left), calHeight(root->right)) + 1;
}

int calDiameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lHeight = calHeight(root->left);
    int rHeight = calHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;

    int lDiameter = calDiameter(root->left);
    int rDiameter = calDiameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
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

    // Diameter of Binary Tree
    cout << calDiameter(root) << "\n";
    return 0;
}