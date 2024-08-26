#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <unordered_set>

using namespace std;

// Function to check a valid path between two vertices
bool CheckPath(int n, vector<vector<int>> &edges, int source, int destination)
{
    map<int, vector<int>> adjacency;
    for (const auto &edge : edges)
    {
        adjacency[edge[0]].push_back(edge[1]);
        adjacency[edge[1]].push_back(edge[0]);
    }

    unordered_set<int> visited;
    queue<int> q;

    q.push(source);
    visited.insert(source);

    while (!q.empty())
    {
        int currentVertex = q.front();
        q.pop();

        // Check if the dequeued vertex is the destination
        if (currentVertex == destination)
        {
            return true;
        }

        // Explore neighbors of the current vertex
        for (int neighbor : adjacency[currentVertex])
        {

            // If neighbor has not been visited yet, enqueue it and mark it as visited
            if (visited.find(neighbor) == visited.end())
            {
                q.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }

    // Return false if destination vertex is not reached
    return false;
}

int main()
{
    vector<int> n = {3, 4, 6, 5, 7};
    vector<vector<vector<int>>> edges = {
        {{0, 1}, {1, 2}},
        {{0, 1}, {0, 3}},
        {{0, 1}, {1, 2}, {1, 3}, {1, 4}, {3, 5}},
        {{0, 3}, {1, 3}, {2, 4}},
        {{0, 6}, {1, 5}, {1, 4}, {2, 4}, {2, 5}, {2, 6}, {3, 4}, {3, 6}, {4, 5}, {5, 6}}};

    vector<int> sources = {2, 0, 0, 3, 5};
    vector<int> destinations = {0, 2, 5, 4, 3};

    for (size_t i = 0; i < edges.size(); ++i)
    {
        cout << i + 1 << ".\tn: " << n[i] << endl;
        cout << "\tEdges: ";
        for (const auto &edge : edges[i])
        {
            cout << "[" << edge[0] << ", " << edge[1] << "] ";
        }
        cout << endl;
        cout << "\tSource: " << sources[i] << endl;
        cout << "\tDestination: " << destinations[i] << endl;
        cout << "\tPath exists: " << (CheckPath(n[i], edges[i], sources[i], destinations[i]) ? "true" : "false") << endl;
        cout << string(100, '-') << endl;
    }

    return 0;
}