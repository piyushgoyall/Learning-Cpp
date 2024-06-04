// LCA
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

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

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == nullptr || root == p || root == q)
        return root;

    TreeNode *leftLCA = lowestCommonAncestor(root->left, p, q);
    TreeNode *rightLCA = lowestCommonAncestor(root->right, p, q);

    if (leftLCA && rightLCA)
        return root;
    return leftLCA ? leftLCA : rightLCA;
}

TreeNode *findNode(TreeNode *root, int val)
{
    if (root == nullptr)
        return nullptr;

    if (root->val == val)
        return root;

    TreeNode *left = findNode(root->left, val);
    TreeNode *right = findNode(root->right, val);

    return left ? left : right;
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

    int p, q;
    cin >> p >> q;

    TreeNode *nodeP = findNode(root, p);
    TreeNode *nodeQ = findNode(root, q);
    TreeNode *lca = lowestCommonAncestor(root, nodeP, nodeQ);

    cout << "Lowest common ancestor value: " << lca->val << endl;

    return 0;
}
