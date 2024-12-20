#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, map<int, int>> mp;

    map<string, map<int, int>>::iterator itr;
    map<int, int>::iterator ptr;

    mp["One"].insert(make_pair(0, 5));

    mp["Two"].insert(make_pair(1, 10));

    mp["Three"].insert(make_pair(2, 20));

    for (itr = mp.begin(); itr != mp.end(); itr++)
    {

        for (ptr = itr->second.begin(); ptr != itr->second.end(); ptr++)
        {
            cout << "First key is " << itr->first
                 << " And second key is " << ptr->first
                 << " And value is " << ptr->second << endl;
        }
    }

    return 0;
}