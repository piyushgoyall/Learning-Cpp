// Bipartite Graphs
// - Its vertices can be divided into two disjoint and independant sets U and V such that every edge connects a vertex in U to one in V.
// - The graph does not contain any odd - length cycles.
// - The graph is 2 colorable

// Traverse the grpah
// - Traverse the graph
// - If the current node is of red color, paint its neighbours as blue.

// If you are able to color the graph successfully, then the graph is colored.

// Traverse the grpah
// - Traverse the graph
// - If the current node is of red color, paint its neighbours as blue.

// If you are able to color the graph successfully, then the graph is bipartite.

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;
bool bipart;

void color(int u, int curr)
{
    if (col[u] != -1 and col[u] != curr)
    {
        bipart = false;
        return;
    }
    col[u] = curr;
    if (vis[u])
    {
        return;
    }
    vis[u] = true;
    for (auto i : adj[u])
    {
        color(i, curr xor 1);
        // 0 xor 1 = 1
        // 1 xor 1 = 0
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    bipart = true;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, false);
    col = vector<int>(n, -1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            color(i, 0);
        }
    }
    if (bipart)
    {
        cout << "Graph is bipartite";
    }
    else
    {
        cout << "Graph is not bipartite";
    }
    return 0;
}