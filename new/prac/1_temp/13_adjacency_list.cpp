#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Graph
{
private:
    int numVertices;
    vector<list<int>> adjLists; // Adjacency list representation

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
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

    return 0;
}
