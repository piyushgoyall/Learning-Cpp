// Floyd Warshall Algorithm
// To find all pair shortest paths.
// i.e. forevery u,v in Graph G, find the shortest path from u and v.
// PSEUDOCODE
// for(int k=0;k<n;++k)
// {
//     for(int i =0;i<n;++i)
//     {
//         for(int j=0;j<n;++j)
//         {
//             d[i][j] = min(d[i][j],d[i][k] + d[k][j])
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main()
{
    vector<vector<int>> graph = {{0, 5, INF, 10},
                                 {INF, 0, 3, INF},
                                 {INF, INF, 0, 1},
                                 {INF, INF, INF, 0}};
    int n = graph.size();
    vector<vector<int>> dist = graph;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dist[i][j] == INF)
            {
                cout << "INF ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
    // // 1,3
    // cout << dist[1][3];
    return 0;
}