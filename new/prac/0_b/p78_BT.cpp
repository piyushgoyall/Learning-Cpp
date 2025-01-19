#include <iostream>
#include <queue>
#include <map>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void bottomView(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    map<int, int> bottomViewMap;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *currentNode = temp.first;
        int hd = temp.second;

        bottomViewMap[hd] = currentNode->data;

        if (currentNode->left)
        {
            q.push({currentNode->left, hd - 1});
        }

        if (currentNode->right)
        {
            q.push({currentNode->right, hd + 1});
        }
    }

    cout << "Bottom View: ";
    for (auto it = bottomViewMap.begin(); it != bottomViewMap.end(); ++it)
    {
        cout << it->second << " ";
    }
    cout << endl;
}

Node *newNode(int data)
{
    return new Node(data);
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);
    root->left->right->left = newNode(7);
    root->right->right->left = newNode(8);

    bottomView(root);

    return 0;
}
