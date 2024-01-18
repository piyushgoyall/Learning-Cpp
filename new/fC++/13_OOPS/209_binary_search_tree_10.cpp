// Are BST Identical

// Problem: For given root nodes of 2 binary search trees, print if the BST's are identical or not.
// Identical BST's are structurally identical & have equal values for the nodes in the structure.

// Strategy: 1) If both empty, return true
//  2) If both non-empty,
//         a) Check that the data at nodes is equal.
//         b) Check if left subtrees are same.
//         c) Check if right subtreess are same.
//  3) if(a,b,c) are true, return true else, return false

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

// isIdentical
bool isIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }

    else if (root1 == NULL || root2 == NULL)
    {
        return false;
    }

    else
    {
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->left);

        if (cond1 && cond2 && cond3)
        {
            return true;
        }

        return false;
    }
}

int main()
{
    /*
            2
           / \
          1   3
    */
    Node *root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(3);

    /*
            6
           / \
          3   10
    */

    Node *root2 = new Node(6);
    root2->left = new Node(3);
    root2->right = new Node(10);

    if (isIdentical(root1, root2))
    {
        cout << "BST's are identical" << endl;
    }

    else
    {
        cout << "BST's are not identical" << endl;
    }

    return 0;
}