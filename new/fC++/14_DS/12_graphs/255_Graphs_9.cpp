// What is a Connected Component
// A connected component is a subgraph in which any two vertices are connected to each other by paths,
// and which is connected to no additional vertices in the supergraph.

// IDEA
// 1) Visit the nodes in a depth - first fashion.
// 2) If the node is not visited, visit that node and its neighbour recursively.
// Each time a unvisited node is found, a new component will be found.

// Pseudocode;
// For node u in nodes:
//     if(!vis[u]){
//         components.add(visit_component(u));
//     }
// Function visit_component(src){
//     vis[src] = true;
//     for v in adj[src]:
//         visit_component(v)
// }
// Find the no of connected components in a graph and its size

#include <bits/stdc++.h>
using namespace std;

vector<bool> vis;
int n, m;
vector<vector<int>> adj;
vector<int> components;

int get_comp(int idx)
{
    if (vis[idx])
    {
        return 0;
    }

    vis[idx] = true;
    int ans = 1;
    for (auto i : adj[idx])
    {
        if (!vis[i])
        {
            ans += get_comp(i);
            vis[i] = true;
        }
    }
    return ans;
}

int main()
{
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n);
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
            components.push_back(get_comp(i));
        }
    }
    for (auto i : components)
    {
        cout << i << " ";
    }
    return 0;
}