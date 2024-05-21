#include <iostream>

using namespace std;

// Definition of the TreeNode structure
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// BinaryTree class to encapsulate tree operations
class BinaryTree
{
public:
    BinaryTree() : root(nullptr) {}

    // Function to insert a new value into the binary tree
    void insert(int value)
    {
        root = insertRec(root, value);
    }

    // Function to perform in-order traversal of the binary tree
    void inorderTraversal()
    {
        inorderRec(root);
    }

private:
    TreeNode *root;

    // Helper function to insert a new value into the binary tree recursively
    TreeNode *insertRec(TreeNode *node, int value)
    {
        if (node == nullptr)
        {
            return new TreeNode(value);
        }

        if (value < node->data)
        {
            node->left = insertRec(node->left, value);
        }
        else
        {
            node->right = insertRec(node->right, value);
        }

        return node;
    }

    // Helper function to perform in-order traversal of the binary tree recursively
    void inorderRec(TreeNode *node)
    {
        if (node == nullptr)
        {
            return;
        }

        inorderRec(node->left);
        cout << node->data << " ";
        inorderRec(node->right);
    }
};

int main()
{
    BinaryTree tree;

    // Inserting elements into the binary tree
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    // Performing in-order traversal
    cout << "In-order traversal: ";
    tree.inorderTraversal();
    cout << endl;

    return 0;
}
