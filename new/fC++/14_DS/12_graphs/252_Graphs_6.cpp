// Graphs - Topological Sort

// A topological Ordering is an ordering of the nodes in a directed graph where for each directed edge from node A to node B,
// node A appears before node B in the ordering.

// Note: Topological ordering are NOT unique.

// NOT every graph has a topological sort!
// Directed Cyclic Graph cannot have a Topological Sort.
// Only Directed Acyclic Graph (DAG) have a valid Topological Sort.

// Indegree: The number of inward directed edges on vertex in a directed graph.
// Algorithm
// While(All the nodes are not visited)
//      Nodes with zero indegree can be added to the output array.
//      All the nodes which are adjacent to terminal nodes, gets their indegree subtracted.

// Pseudocode
// map<int,int> in_deg;                            cnt = 0;
// for(edhe it:edges){                             while(queue is not empty){
//     adj_list[it[1]].push_back(it[0]);               cnt++;
//     in_deg[it[0]]++;                                int x = pq.front();
// }                                                   pq.pop();
// queue<int> pq;                                      for(node it:adj_list[x]){
// for(int i=0;i<n;i++){                                   in_deg[it]--;
//     if(in_deg[i]==0){                                   if(in_deg[it]==0){
//         pq.push(i);                                         pq.push(it);
//     }                                                   }
// }                                                   }
//                                                 }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    vector<vector<int>> adj(n);
    vector<int> indeg(n, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // u --> v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            pq.push(i);
        }
    }
    while (!pq.empty())
    {
        cnt++;
        int x = pq.front();
        pq.pop();
        cout << x << " ";
        for (auto it : adj[x])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                pq.push(it);
        }
    }
    return 0;
}
