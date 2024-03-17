// Hashing - Print Vertical Order Of A Binary Tree
// Given a binary tree in array representation [10,7,4,3,11,14,6]
// It's binary tree representation
//              10
//             /  \
//            7    4
//           / \  / \
//          3  11/   6
//              /
//             14
// Computing horizontal distance approach : means if we start drawing horizontal lines from left 3 falls on first line, then 7, then 10 11 14, then 4 and last is 6.

// Method: Consider root at centre, so, horizontal distance of centre from centre is 0 then 7 is at -1 distance then 3 is at -2 distance. Similarily 4 is at 1 distance
// and 6 is at 2 distance.
// APPROACH:            10 (HD = 0)                   MAP:  Key(HD)
//                     /  \                                   0 [10,11,14]
//           (HD = 1) 7    4  (HD = 1)                       -1 [7]
//                   / \  / \                                -2 [3]
//                  3  11/   6                                1 [4]
//                      /                                     2 [6]
//                     14
// Using hashing:
//               1) Starting from root node.
//               2) Recursively call left and right with (HD - 1) and (HD + 1) as arguments
//                  Base Case : When current node = NULL(return)
//               3) Push the value into vector corresponding to the horizontal distance(HD).
//               4) Output the map.

// Time Complexity: nlog(n)

#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <string>
using namespace std;

// #define int long long

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) __builtin_popcount(x)

struct Node
{
    int key;
    Node *left, *right;
};

Node *newModel(int key)
{
    Node *node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

void getVerticalOrder(Node *root, int hdis, map<int, vi> &m)
{
    if (root == NULL)
    {
        return;
    }
    m[hdis].push_back(root->key);
    getVerticalOrder(root->left, hdis - 1, m);
    getVerticalOrder(root->right, hdis + 1, m);
}

signed main()
{
    Node *root = newModel(10);
    root->left = newModel(7);
    root->right = newModel(4);
    root->left->left = newModel(3);
    root->left->right = newModel(11);
    root->right->left = newModel(14);
    root->right->right = newModel(6);

    map<int, vector<int>> m;
    int hdis = 0;

    getVerticalOrder(root, hdis, m);

    map<int, vi>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        for (int i = 0; i < (it->ss).size(); i++)
        {
            cout << (it->ss)[i] << " ";
        }
        cout << endl;
    }
}