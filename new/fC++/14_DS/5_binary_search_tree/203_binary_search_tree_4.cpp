// Build BST From Preorder
// Time Complexity for constructBST function = O(N)

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    // Constructor to initialize a Node with a given value
    Node(int val)
    {
        data = val;
        left = NULL;  // Initializing left child pointer to NULL
        right = NULL; // Initializing right child pointer to NULL
    }
};

Node *constructBST(int preorder[], int *preorderIdx, int key, int min, int max, int n)
{
    if (*preorderIdx >= n)
    {
        return NULL;
    }

    Node *root = NULL;
    if (key > min && key < max)
    {
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;

        if (*preorderIdx < n)
        {
            root->left = constructBST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        }

        if (*preorderIdx < n)
        {
            root->right = constructBST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }
    }

    return root;
}

void printPreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main()
{
    /*
            10
           /  \
          2   13
         /    /
        1    11
    */

    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preorderIdx = 0;
    Node *root = constructBST(preorder, &preorderIdx, preorder[0], INT_MIN, INT_MAX, n);
    printPreorder(root);

    return 0;
}