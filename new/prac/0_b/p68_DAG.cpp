#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

class Graph
{
private:
    unordered_map<int, vector<int>> adjList;

    void findPaths(int node, string path, unordered_map<string, int> &pathFreq, unordered_map<int, bool> &visited)
    {
        visited[node] = true;
        path += to_string(node) + "->";

        if (adjList[node].empty())
        {
            path.pop_back();
            path.pop_back();
            pathFreq[path]++;
        }
        else
        {
            for (int neighbor : adjList[node])
            {
                if (!visited[neighbor])
                {
                    findPaths(neighbor, path, pathFreq, visited);
                }
            }
        }
        visited[node] = false;
    }

public:
    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
    }

    string mostFrequentPath(int start)
    {
        unordered_map<string, int> pathFreq;
        unordered_map<int, bool> visited;

        findPaths(start, "", pathFreq, visited);

        string maxPath = "";
        int maxCount = 0;

        for (auto &entry : pathFreq)
        {
            if (entry.second > maxCount)
            {
                maxCount = entry.second;
                maxPath = entry.first;
            }
            else if (entry.second == maxCount)
            {
                maxPath = min(maxPath, entry.first);
            }
        }
        return maxPath.empty() ? "No path found" : maxPath;
    }
};

int main()
{
    Graph g;
    int edges;
    cout << "Enter the number of edges: ";
    cin >> edges;

    cout << "Enter the edges (u v) format:\n";
    for (int i = 0; i < edges; ++i)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    int start;
    cout << "Enter the starting node: ";
    cin >> start;

    string result = g.mostFrequentPath(start);
    cout << "Most frequent path: " << result << "\n";

    return 0;
}
