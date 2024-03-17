// Recover Binary Search Tree
// Problem: 2 nodes of a BST are swapped. Our task is to restore(correct) the BST.

// Strategy: Inorder of a BST is sorted -> 2 elements in a sorted array are swapped.

// Case 1 : Swapped elements are NOT adjacent to each other
// eg: original = {1,2,3,4,5,6,7,8}
// after swapping = {1,8,3,4,5,6,7,2}

// Case 2 : Swapped elements are adjacent to each other
// eg: original = {1,2,3,4,5,6,7,8}
// after swapping = {1,2,3,4,5,6,7,8}

// Strategy : Maintain 3 pointers - first, last and mid

// Case 1 : First: previous node where 1st number < previous[8]
//          Mid : number where 1st number < previous[3]
//          Last : 2nd node where number < previous[2]

// Case 2 : First : previous node where 1st number < previous[4]
//          Mid : number where 1st number < previous[3]
//          Last : NULL

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

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void calcPointers(Node *root, Node **first, Node **mid, Node **last, Node **prev)
{
    if (root == NULL)
    {
        return;
    }

    calcPointers(root->left, first, mid, last, prev);

    if (*prev && root->data < (*prev)->data)
    {
        if (!*first)
        {
            *first = *prev;
            *mid = root;
        }

        else
        {
            *last = root;
        }
    }
    *prev = root;
    calcPointers(root->right, first, mid, last, prev);
}

void restoreBST(Node *root)
{
    Node *first, *mid, *last, *prev;
    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;

    calcPointers(root, &first, &mid, &last, &prev);

    // case 1
    if (first && last)
    {
        swap(&(first->data), &(last->data));
    }

    else if (first && mid)
    {
        swap(&(first->data), &(mid->data));
    }
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
    /*
            6
           / \
          9   3
         / \   \
        1  4   13
    */

    Node *root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(13);

    inorder(root);
    cout << endl;
    restoreBST(root);
    inorder(root);
    return 0;
}