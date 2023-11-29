// VECTOR (How to print vector elements)

#include <bits/stdc++.h>
using namespace std;

int main()
{
// 1

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

// 2
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

// 3
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

// 4
    vector<int> v2(3, 50);
    // 50 50 50
    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;

// 5
    swap(v, v2);
    for (auto element : v)
    {
        cout << element << endl;
    }
    for (auto element : v2)
    {
        cout << element << endl;
    }

// 6
    sort(v.begin(), v.end());
    return 0;
}