// Height Balanced Binary Tree
// For each node, the difference between the heights of the left subtree & right subtree <= 1
// mod(left ht - right ht) <= 1

// Time Complexity(isBalaned) = O(N^2)

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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) + 1;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    if (isBalanced(root->left) == false)
    {
        return false;
    }

    if (isBalanced(root->right) == false)
    {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    if (abs(lh - rh) <= 1)
        return true;
    else
        return false;
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

    // Not Balanced
    /*
            1
           /
          2
         /
        3
    */
    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->left->left = new Node(3);

    // Height Balanced Tree
    if (isBalanced(root2))
        cout << "Balanced Tree" << endl;
    else
        cout << "Unbalanced Tree" << endl;
    return 0;
}