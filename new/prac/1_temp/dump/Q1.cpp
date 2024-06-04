// Q1. Detect cycle in a directed graph
// Given a Directed Graph with V vertices(Numbered from 0 to V - 1) and E edges, check whether it contains any cycle or not .
// Input : First line contains two integers V and E which represent the number of vertex and number of edges in directed graph respectively.
// Next all lines contains two integers v1 and v2 which represent the two vertex and edge between it.
// Output : Print true or false(graph has cycle or not ) Example test case:
// Input:
//     5 5
//     1 2
//     2 3
//     3 1
//     1 4
//     2 0
// Output: true

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &recStack)
{
    visited[node] = true;
    recStack[node] = true;

    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            if (dfs(neighbor, adj, visited, recStack))
            {
                return true;
            }
        }
        else if (recStack[neighbor])
        {
            return true;
        }
    }

    recStack[node] = false;
    return false;
}

bool hasCycle(int V, vector<vector<int>> &adj)
{
    vector<bool> visited(V, false);
    vector<bool> recStack(V, false);
    
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, adj, visited, recStack))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> adj(V);
    cout << "Enter the edges (v1 v2):" << endl;
    for (int i = 0; i < E; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
    }

    if (hasCycle(V, adj))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
