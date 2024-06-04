// Sum root to leaf

#include <iostream>
#include <vector>
#include <sstream>
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
    if (values.empty() || values[0] == -1)
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

// Recursive function to calculate the sum of root-to-leaf numbers
int sumNumbers(TreeNode *root, int currentSum)
{
    if (root == nullptr)
        return 0;

    currentSum = currentSum * 10 + root->val;

    if (root->left == nullptr && root->right == nullptr)
    {
        return currentSum;
    }

    return sumNumbers(root->left, currentSum) + sumNumbers(root->right, currentSum);
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

    // Calculate the sum of root-to-leaf numbers
    int totalSum = sumNumbers(root, 0);

    cout << "Total sum of root-to-leaf numbers: " << totalSum << endl;

    return 0;
}
