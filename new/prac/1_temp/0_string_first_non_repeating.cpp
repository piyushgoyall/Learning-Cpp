#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    queue<char> q;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        q.push(s[i]);

        while (!q.empty() && mp[q.front()] > 1)
            q.pop();
    }

    if (q.empty())
        cout << "-1" << endl;
    else
        cout << q.front() << endl;
}