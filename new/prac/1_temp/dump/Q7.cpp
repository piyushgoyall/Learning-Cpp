// Balanced Binary Tree

#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;

// Definition for binary tree node
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to create a binary tree from input string
TreeNode *createTree(const vector<int> &values)
{
    if (values.empty())
        return nullptr;

    TreeNode *root = new TreeNode(values[0]);
    vector<TreeNode *> nodes = {root};
    bool isLeft = true;

    for (int i = 1; i < values.size(); ++i)
    {
        if (values[i] != -1)
        {
            TreeNode *node = new TreeNode(values[i]);
            if (isLeft)
            {
                nodes.front()->left = node;
            }
            else
            {
                nodes.front()->right = node;
                nodes.erase(nodes.begin());
            }
            nodes.push_back(node);
        }
        else
        {
            if (!isLeft)
                nodes.erase(nodes.begin());
        }
        isLeft = !isLeft;
    }

    return root;
}

// Function to calculate the height of a binary tree
int height(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

// Function to check if a binary tree is balanced
bool isBalanced(TreeNode *root)
{
    if (root == nullptr)
        return true;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
    {
        return true;
    }
    return false;
}

int main()
{
    string input;
    getline(cin, input);
    istringstream iss(input);
    vector<int> values;
    int val;
    while (iss >> val)
    {
        values.push_back(val);
    }

    TreeNode *root = createTree(values);

    // Check if the tree is balanced
    bool balanced = isBalanced(root);

    cout << (balanced ? "true" : "false") << endl;

    return 0;
}
