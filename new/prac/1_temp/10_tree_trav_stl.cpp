#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// Define a structure for tree nodes
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Pre-order Traversal (Iterative)
void preOrderTraversal(TreeNode *root)
{
    if (!root)
        return;
    stack<TreeNode *> s;
    s.push(root);

    while (!s.empty())
    {
        TreeNode *node = s.top();
        s.pop();
        cout << node->val << " ";

        if (node->right)
            s.push(node->right);
        if (node->left)
            s.push(node->left);
    }
    cout << endl;
}

// In-order Traversal (Iterative)
void inOrderTraversal(TreeNode *root)
{
    stack<TreeNode *> s;
    TreeNode *curr = root;

    while (curr || !s.empty())
    {
        while (curr)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->val << " ";
        curr = curr->right;
    }
    cout << endl;
}

// Post-order Traversal (Iterative)
void postOrderTraversal(TreeNode *root)
{
    if (!root)
        return;
    stack<TreeNode *> s1, s2;
    s1.push(root);

    while (!s1.empty())
    {
        TreeNode *node = s1.top();
        s1.pop();
        s2.push(node);

        if (node->left)
            s1.push(node->left);
        if (node->right)
            s1.push(node->right);
    }

    while (!s2.empty())
    {
        cout << s2.top()->val << " ";
        s2.pop();
    }
    cout << endl;
}

// Level-order Traversal (Breadth-First Search)
void levelOrderTraversal(TreeNode *root)
{
    if (!root)
        return;
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();
        cout << node->val << " ";

        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    cout << endl;
}

int main()
{
    // Construct the tree
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Perform and print different tree traversals
    cout << "Pre-order Traversal: ";
    preOrderTraversal(root);

    cout << "In-order Traversal: ";
    inOrderTraversal(root);

    cout << "Post-order Traversal: ";
    postOrderTraversal(root);

    cout << "Level-order Traversal: ";
    levelOrderTraversal(root);

    return 0;
}
