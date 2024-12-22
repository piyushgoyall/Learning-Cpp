#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, map<int, multiset<int>>> multiDimMap;

    // Insert data into the structure
    multiDimMap[1][10].insert(100);
    multiDimMap[1][10].insert(200);
    multiDimMap[1][20].insert(300);
    multiDimMap[2][30].insert(400);
    multiDimMap[2][30].insert(500);
    multiDimMap[2][40].insert(600);

    // Display the contents of the multidimensional map
    for (const auto &[key1, nestedMap] : multiDimMap)
    {
        cout << "Key1: " << key1 << "\n";
        for (const auto &[key2, multiSet] : nestedMap)
        {
            cout << "  Key2: " << key2 << "\n  Values: ";
            for (const auto &value : multiSet)
            {
                cout << value << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
