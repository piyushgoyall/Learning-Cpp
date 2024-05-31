#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

class Graph
{
private:
    int numVertices;
    vector<list<int>> adjLists; // Adjacency list representation
    void DFSUtil(int vertex, vector<bool> &visited);

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void DFS(int startVertex);
    void BFS(int startVertex);
    void printGraph();
};

// Constructor
Graph::Graph(int vertices)
{
    numVertices = vertices;
    adjLists.resize(vertices);
}

// Add edge to the graph
void Graph::addEdge(int src, int dest)
{
    adjLists[src].push_back(dest);
    adjLists[dest].push_back(src); // For undirected graph
}

// Utility function for DFS
void Graph::DFSUtil(int vertex, vector<bool> &visited)
{
    visited[vertex] = true;
    cout << vertex << " ";

    for (int adjVertex : adjLists[vertex])
    {
        if (!visited[adjVertex])
        {
            DFSUtil(adjVertex, visited);
        }
    }
}

// Depth First Search
void Graph::DFS(int startVertex)
{
    vector<bool> visited(numVertices, false);
    DFSUtil(startVertex, visited);
}

// Breadth First Search
void Graph::BFS(int startVertex)
{
    vector<bool> visited(numVertices, false);
    queue<int> queue;

    visited[startVertex] = true;
    queue.push(startVertex);

    while (!queue.empty())
    {
        int vertex = queue.front();
        cout << vertex << " ";
        queue.pop();

        for (int adjVertex : adjLists[vertex])
        {
            if (!visited[adjVertex])
            {
                visited[adjVertex] = true;
                queue.push(adjVertex);
            }
        }
    }
}

// Print the graph
void Graph::printGraph()
{
    for (int i = 0; i < numVertices; ++i)
    {
        cout << "Vertex " << i << ":";
        for (int adjVertex : adjLists[i])
        {
            cout << " -> " << adjVertex;
        }
        cout << endl;
    }
}

int main()
{
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(3, 5);

    cout << "Graph adjacency list representation:" << endl;
    g.printGraph();

    cout << "\nDepth First Search starting from vertex 0:" << endl;
    g.DFS(0);

    cout << "\nBreadth First Search starting from vertex 0:" << endl;
    g.BFS(0);

    return 0;
}
