#include <bits/stdc++.h>
using namespace std;

void display(multimap<pair<string, int>, bool> &data)
{
    cout << "Key(pair<string, int>)\tValue(bool)\n\n";
    for (auto entry : data)
    {
        pair<string, int> key = entry.first;
        cout << '[' << key.first << ", " << key.second << "]\t\t" << entry.second << '\n';
    }
}

int main()
{
    multimap<pair<string, int>, bool> records;

    pair<string, int> key1 = make_pair("Python", 100);
    pair<string, int> key2 = make_pair("Java", 200);
    pair<string, int> key3 = make_pair("HTML", 300);
    pair<string, int> key4 = make_pair("Python", 400);

    records.insert(make_pair(key1, true));
    records.insert(make_pair(key2, false));
    records.insert(make_pair(key3, true));
    records.insert(make_pair(key4, false));

    cout << "Initial Multimap:\n";
    display(records);

    // Count occurrences of a specific key
    auto range = records.equal_range(make_pair("Python", 100));
    cout << "\nEntries with key ('Python', 100):\n";
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << "Value: " << it->second << '\n';
    }

    // Erase elements with a specific key
    records.erase(make_pair("Python", 400));
    cout << "\nAfter removing ('Python', 400):\n";
    display(records);

    // Add a new element
    records.insert(make_pair(make_pair("C++", 500), true));
    cout << "\nAfter adding ('C++', 500):\n";
    display(records);

    return 0;
}
