// BST K'th smallest element

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T data) : data(data), left(nullptr), right(nullptr) {}
};

template <typename T>
class BinarySearchTree
{
public:
    TreeNode<T> *root;

    BinarySearchTree(T *values, int size)
    {
        root = createBinaryTree(values, size);
    }

    TreeNode<T> *createBinaryTree(T *values, int size)
    {
        if (size == 0)
        {
            return nullptr;
        }

        // Create the root node of the binary search tree
        TreeNode<T> *root = new TreeNode<T>(values[0]);

        // Iterate over the array of values starting from the second value
        for (int i = 1; i < size; i++)
        {
            TreeNode<T> *node = new TreeNode<T>(values[i]);
            TreeNode<T> *curr = root;
            while (true)
            {
                // If the value is less than or equal to the current node's value, move to the left child
                if (node->data <= curr->data)
                {
                    if (curr->left == nullptr)
                    {
                        // If the left child is empty, insert the new node here and break the loop
                        curr->left = node;
                        break;
                    }
                    else
                    {
                        // If the left child is not empty, move to the left child and continue the search
                        curr = curr->left;
                    }
                }
                else
                {
                    // If the value is greater than the current node's value, move to the right child
                    if (curr->right == nullptr)
                    {
                        // If the right child is empty, insert the new node here and break the loop
                        curr->right = node;
                        break;
                    }
                    else
                    {
                        // If the right child is not empty, move to the right child and continue the search
                        curr = curr->right;
                    }
                }
            }
        }

        // Return the root of the binary search tree
        return root;
    }
};

void displayTreeHelper(TreeNode<int> *root, int space)
{
    const int COUNT = 4;
    if (root == nullptr)
        return;

    space += COUNT;

    displayTreeHelper(root->right, space);

    cout << endl;
    for (int i = COUNT; i < space; i++)
        cout << " ";
    cout << root->data << "\n";

    displayTreeHelper(root->left, space);
}

void displayTree(TreeNode<int> *root)
{
    displayTreeHelper(root, 0);
}

int KthSmallestRec(TreeNode<int> *node, int &k)
{
    if (node != nullptr)
    {
        int right = KthSmallestRec(node->right, k);

        if (right != -1)
        {
            return right;
        }

        k--;

        if (k == 0)
        {
            return node->data;
        }

        return KthSmallestRec(node->left, k);
    }
    else
    {
        return -1;
    }
}

// Function to find kth smallest element
int FindKthMax(TreeNode<int> *root, int k)
{
    return KthSmallestRec(root, k);
}

int main()
{
    int inputs[][10] = {
        {18, 15, 13, 19, 5, 14},
        {1, 2, 3, 4, 5, 6},
        {100, 200, 50, 40, 30, 80, 90},
        {10},
        {1, 2},
        {-10, -20, -30, -40, -50, -60, -70}};
    int sizes[] = {6, 6, 7, 1, 2, 7};

    int k[] = {2, 4, 6, 1, 1, 4};

    for (int i = 0; i < sizeof(inputs) / sizeof(inputs[0]); i++)
    {
        cout << (i + 1) << "\tk = " << k[i] << endl;
        BinarySearchTree<int> inputTree(inputs[i], sizes[i]);
        cout << "\n\tInput Tree: \n";
        displayTree(inputTree.root);
        cout << "\n\tSmallest element: " << FindKthMax(inputTree.root, k[i]) << endl;
        cout << string(100, '-') << endl;
    }

    return 0;
}
