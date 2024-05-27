// C++ program that takes two arrays as input, creates a BST from the first array, deletes nodes from the second array that are present
// in the first array, and then prints the pre - order traversal of the remaining BST.

#include <iostream>
using namespace std;

// Define the structure for a BST node
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a node into the BST
Node *insert(Node *root, int data)
{
    if (root == nullptr)
    {
        return new Node(data);
    }

    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to find the minimum value node in the BST
Node *findMin(Node *root)
{
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the BST
Node *deleteNode(Node *root, int data)
{
    if (root == nullptr)
        return root;

    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else
    {
        // Node with only one child or no child
        if (root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node *temp = findMin(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Function for pre-order traversal
void preOrder(Node *root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    Node *root = nullptr;
    int n, m, value;

    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr1[i];
        root = insert(root, arr1[i]);
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; ++i)
    {
        cin >> arr2[i];
    }

    // Delete nodes from the BST that are present in the second array
    for (int i = 0; i < m; ++i)
    {
        root = deleteNode(root, arr2[i]);
    }

    // Print the pre-order traversal of the remaining BST
    cout << "Pre-order traversal of the remaining BST: ";
    preOrder(root);
    cout << endl;

    return 0;
}
