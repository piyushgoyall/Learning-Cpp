#include <bits/stdc++.h>
using namespace std;

void findRoute(unordered_map<string, vector<string>> &graph, string start, int cityCount)
{
    queue<string> q;
    vector<string> route;
    unordered_set<string> visited;
    q.push(start);

    while (!q.empty())
    {
        string node = q.front();
        q.pop();
        route.push_back(node);

        for (string next : graph[node])
        {
            if (visited.find(next) == visited.end())
            {
                q.push(next);
                visited.insert(next);
            }
        }
    }

    if (route.size() != cityCount)
    {
        cout << "No valid route" << endl;
        return;
    }

    for (int i = 0; i < route.size(); i++)
    {
        cout << route[i];
        if (i != route.size() - 1)
            cout << " -> ";
    }
    cout << endl;
}

int main()
{
    unordered_map<string, vector<string>> graph;
    unordered_map<string, int> inDegree, outDegree;
    unordered_set<string> cities;
    string u, v, line;

    cout << "Enter city pairs (press Enter on empty line to stop):" << endl;
    while (getline(cin, line) && !line.empty())
    {
        stringstream ss(line);
        ss >> u >> v;
        graph[u].push_back(v);
        outDegree[u]++;
        inDegree[v]++;
        cities.insert(u);
        cities.insert(v);
    }

    string start = "";
    int startCount = 0, endCount = 0;

    for (auto &city : cities)
    {
        int outD = outDegree[city];
        int inD = inDegree[city];

        if (outD - inD == 1)
        {
            start = city;
            startCount++;
        }
        else if (inD - outD == 1)
        {
            endCount++;
        }
    }

    if (startCount > 1 || endCount > 1)
    {
        cout << "No valid route" << endl;
        return 0;
    }

    if (start.empty())
        start = *cities.begin();

    findRoute(graph, start, cities.size());
    return 0;
}
