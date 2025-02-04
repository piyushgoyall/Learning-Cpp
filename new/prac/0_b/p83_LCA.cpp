#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = right = nullptr;
    }
};

class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (!root || root == p || root == q)
            return root;

        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);

        if (left && right)
            return root;
        return left ? left : right;
    }
};

// Function to build the tree from an array (handling NULL nodes properly)
TreeNode *buildTreeFromArray(vector<int> &arr)
{
    if (arr.empty() || arr[0] == -1)
        return nullptr;

    TreeNode *root = new TreeNode(arr[0]);
    queue<TreeNode *> q;
    q.push(root);
    int i = 1;

    while (!q.empty() && i < arr.size())
    {
        TreeNode *curr = q.front();
        q.pop();

        if (i < arr.size() && arr[i] != -1)
        {
            curr->left = new TreeNode(arr[i]);
            q.push(curr->left);
        }
        i++;

        if (i < arr.size() && arr[i] != -1)
        {
            curr->right = new TreeNode(arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

// Function to create a map of node values to their TreeNode pointers
void mapNodes(TreeNode *root, unordered_map<int, TreeNode *> &nodeMap)
{
    if (!root)
        return;
    nodeMap[root->val] = root;
    mapNodes(root->left, nodeMap);
    mapNodes(root->right, nodeMap);
}

int main()
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the tree elements in level order (-1 for NULL nodes): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    TreeNode *root = buildTreeFromArray(arr);

    unordered_map<int, TreeNode *> nodeMap;
    mapNodes(root, nodeMap);

    int pVal, qVal;
    cout << "Enter two node values to find LCA: ";
    cin >> pVal >> qVal;

    if (nodeMap.find(pVal) == nodeMap.end() || nodeMap.find(qVal) == nodeMap.end())
    {
        cout << "One or both nodes not found in the tree.\n";
        return 0;
    }

    Solution sol;
    TreeNode *lca = sol.lowestCommonAncestor(root, nodeMap[pVal], nodeMap[qVal]);

    if (lca)
        cout << "LCA of " << pVal << " and " << qVal << " is: " << lca->val << endl;
    else
        cout << "No common ancestor found.\n";

    return 0;
}
