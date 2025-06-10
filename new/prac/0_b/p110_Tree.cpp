#include <bits/stdc++.h>
using namespace std;

void addEdge(int x, int y, vector<vector<int>> &adj)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void printParents(int node, vector<vector<int>> &adj, int parent)
{
    if (parent == 0)
    {
        cout << node << " -> root" << endl;
    }
    else
    {
        cout << node << " -> " << parent << endl;
    }

    for (int i : adj[node])
    {
        if (i != parent)
            printParents(i, adj, node);
    }
}

void printChildren(int root, vector<vector<int>> &adj)
{
    queue<int> q;
    q.push(root);

    int n = adj.size();
    vector<bool> visited(n, false);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        visited[node] = true;
        cout << node << " -> ";
        for (int i : adj[node])
        {
            if (visited[i] == false)
            {
                cout << i << " ";
                q.push(i);
            }
        }
        cout << endl;
    }
}

void printLeafNodes(int Root, vector<vector<int>> &adj)
{
    for (int i = 1; i < adj.size(); i++)
        if (adj[i].size() == 1 && i != Root)
            cout << i << " ";
    cout << endl;
}

void printDegrees(int Root, vector<vector<int>> &adj)
{
    for (int i = 1; i < adj.size(); i++)
    {
        cout << i << ": ";

        if (i == Root)
            cout << adj[i].size() << endl;
        else
            cout << adj[i].size() - 1 << endl;
    }
}

int main()
{
    int n, root;
    cin >> n >> root;

    vector<vector<int>> adj(n + 1, vector<int>());
    addEdge(1, 2, adj);
    addEdge(1, 3, adj);
    addEdge(1, 4, adj);
    addEdge(2, 5, adj);
    addEdge(2, 6, adj);
    addEdge(4, 7, adj);

    // Printing the parents of each node
    cout << "The parents of each node are:" << endl;
    printParents(root, adj, 0);

    // Printing the children of each node
    cout << "The children of each node are:" << endl;
    printChildren(root, adj);

    // Printing the leaf nodes in the tree
    cout << "The leaf nodes of the tree are:" << endl;
    printLeafNodes(root, adj);

    // // Printing the degrees of each node
    cout << "The degrees of each node are:" << endl;
    printDegrees(root, adj);

    return 0;
}