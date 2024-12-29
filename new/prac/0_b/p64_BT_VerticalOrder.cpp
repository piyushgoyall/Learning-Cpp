#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

vector<vector<int>> verticalOrderTraversal(TreeNode *root)
{
    vector<vector<int>> result;
    if (!root)
        return result;

    map<int, vector<int>> columnTable;      // Map to store nodes grouped by column index
    queue<pair<TreeNode *, int>> nodeQueue; // Queue for BFS (node, column index)

    nodeQueue.push({root, 0});

    while (!nodeQueue.empty())
    {
        auto [node, column] = nodeQueue.front();
        nodeQueue.pop();

        columnTable[column].push_back(node->val);

        if (node->left)
        {
            nodeQueue.push({node->left, column - 1});
        }
        if (node->right)
        {
            nodeQueue.push({node->right, column + 1});
        }
    }

    for (auto &[column, nodes] : columnTable)
    {
        result.push_back(nodes);
    }

    return result;
}

void printVerticalOrder(const vector<vector<int>> &order)
{
    for (const auto &col : order)
    {
        for (int val : col)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

TreeNode *buildTree()
{
    cout << "Enter the tree level-order (use -1 for NULL nodes):" << endl;
    string input;
    getline(cin, input);
    if (input.empty())
        return nullptr;

    stringstream ss(input);
    vector<int> values;
    int val;

    while (ss >> val)
    {
        values.push_back(val);
    }

    if (values.empty() || values[0] == -1)
        return nullptr;

    TreeNode *root = new TreeNode(values[0]);
    queue<TreeNode *> q;
    q.push(root);
    int i = 1;

    while (!q.empty() && i < values.size())
    {
        TreeNode *current = q.front();
        q.pop();

        if (values[i] != -1)
        {
            current->left = new TreeNode(values[i]);
            q.push(current->left);
        }
        i++;

        if (i < values.size() && values[i] != -1)
        {
            current->right = new TreeNode(values[i]);
            q.push(current->right);
        }
        i++;
    }

    return root;
}

int main()
{
    TreeNode *root = buildTree();
    vector<vector<int>> verticalOrder = verticalOrderTraversal(root);

    cout << "Vertical order traversal:" << endl;
    printVerticalOrder(verticalOrder);

    return 0;
}
