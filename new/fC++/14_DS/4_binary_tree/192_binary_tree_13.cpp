// Height Balanced Binary Tree
// Better Way: Instead of calling height function we can pass a height pointer of integer type to isBalanced and
// it simultaneously cal. height of left and right subtree to the current root it reduces Time Complexity To O(N)

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

bool isBalanced(Node *root, int *height)
{
    if (root == NULL)
    {
        return true;
    }

    int lh = 0, rh = 0;
    if (isBalanced(root->left, &lh) == false)
    {
        return false;
    }

    if (isBalanced(root->right, &rh) == false)
    {
        return false;
    }

    *height = max(lh, rh) + 1;
    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
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
    int height = 0;

    if (isBalanced(root2, &height) == true)
        cout << "Balanced Tree" << endl;
    else
        cout << "Unbalanced Tree" << endl;
    return 0;
}