// Print Preorder, Inorder and Postorder in 1 traversal

#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

class Solution
{
public:
    vector<int> postOrder(Node *node)
    {
        stack<pair<Node *, int>> st;
        st.push({node, 1});
        vector<int> pre, in, post;

        if (node == nullptr)
            return post;

        while (!st.empty())
        {
            auto it = st.top();
            st.pop();

            // this is part of pre
            // increment 1 to 2
            // push the left side of the tree

            if (it.second == 1)
            {
                pre.push_back(it.first->data);
                it.second++;
                st.push(it);

                if (it.first->left != nullptr)
                {
                    st.push({it.first->left, 1});
                }
            }

            // this is a part of in
            // increment 2 to 3
            // push right

            else if (it.second == 2)
            {
                in.push_back(it.first->data);
                it.second++;
                st.push(it);

                if (it.first->right != nullptr)
                {
                    st.push({it.first->right, 1});
                }
            }

            // don't push it back again

            else
            {
                post.push_back(it.first->data);
            }
        }
        return post;
    }
};

int main()
{

    int t;
    scanf("%d ", &t);
    while (t--)
    {
        string s, ch;
        getline(cin, s);

        Node *root = buildTree(s);

        vector<int> ans;
        Solution ob;
        ans = ob.postOrder(root);

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << endl;
    }
    return 0;
}