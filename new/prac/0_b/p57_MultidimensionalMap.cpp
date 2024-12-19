#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, map<int, int>> mp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mp[i][j] = i + j;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "First key: " << i;
            cout << ", Second key: " << j;
            cout << " and Value is: " << mp[i][j] << endl;
        }
        cout << endl;
    }

    map<int, map<int, int>>::iterator itr;
    map<int, int>::iterator ptr;

    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        for (ptr = itr->second.begin(); ptr != itr->second.end(); ptr++)
        {
            cout << "First key: " << itr->first;
            cout << ", Second key: " << ptr->first;
            cout << " and Value is: " << ptr->second << endl;
        }
        cout << endl;
    }

    return 0;
}