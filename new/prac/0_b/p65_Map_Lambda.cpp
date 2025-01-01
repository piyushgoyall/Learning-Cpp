#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    map<int, string> inputMap;
    int n, key;
    string value;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter key and value: ";
        cin >> key >> value;
        inputMap[key] = value;
    }

    vector<pair<int, string>> mapVector(inputMap.begin(), inputMap.end());

    sort(mapVector.begin(), mapVector.end(), [](const pair<int, string> &a, const pair<int, string> &b)
         {
        if (a.second != b.second)
            return a.second < b.second;
        return a.first < b.first; });

    for (const auto &pair : mapVector)
    {
        cout << pair.first << " -> " << pair.second << "\n";
    }

    return 0;
}
