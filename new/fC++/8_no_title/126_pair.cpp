// We have to reduce the given array (smallest element should be replaced by zero then by 1 and so on).

#include <bits/stdc++.h>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return (p1.first < p2.first);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<pair<int, int>> v;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        v.push_back(make_pair(arr[i], i));
        /*
                pair<int, int> p;
                p.first = arr[i];
                p.second = i;

                cout << p.first << "  ";
                cout << p.second << "  ";
        */
    }

    sort(v.begin(), v.end(), myCompare);
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}