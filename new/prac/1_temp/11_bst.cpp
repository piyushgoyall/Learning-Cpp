#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a value in the BST
Node *insert(Node *node, int val)
{
    if (node == nullptr)
    {
        return new Node(val);
    }
    if (val < node->data)
    {
        node->left = insert(node->left, val);
    }
    else
    {
        node->right = insert(node->right, val);
    }
    return node;
}

// Function to search for a value in the BST
bool search(Node *node, int val)
{
    if (node == nullptr)
    {
        return false;
    }
    if (node->data == val)
    {
        return true;
    }
    if (val < node->data)
    {
        return search(node->left, val);
    }
    else
    {
        return search(node->right, val);
    }
}

// Function for in-order traversal
void inorder(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

// Function for pre-order traversal
void preorder(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

// Function for post-order traversal
void postorder(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

int main()
{
    Node *root = nullptr;

    // Inserting values into the BST
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 6);
    root = insert(root, 8);

    // In-order traversal
    cout << "In-order Traversal: ";
    inorder(root);
    cout << endl;

    // Pre-order traversal
    cout << "Pre-order Traversal: ";
    preorder(root);
    cout << endl;

    // Post-order traversal
    cout << "Post-order Traversal: ";
    postorder(root);
    cout << endl;

    // Searching for a value
    int searchValue = 4;
    if (search(root, searchValue))
    {
        cout << "Value " << searchValue << " found in the tree." << endl;
    }
    else
    {
        cout << "Value " << searchValue << " not found in the tree." << endl;
    }

    return 0;
}
