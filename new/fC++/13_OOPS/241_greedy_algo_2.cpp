// Activity Selection Problem - Greedy Algorithm
// You are given n activities with their start and finish times. Select the maximum number of activities
// that can be performed by a single person, assuming that a person can only work on a single activity at a time.
// GREEDY : If you are at the i'th activity, What should be your next step?
// Take the next activity which ends first.
// Sort the activities with respect to end times.

#include <bits/stdc++.h>
using namespace std;
bool compare(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }
    sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b)
         { return a[1] < b[1]; });

    int take = 1;
    int end = v[0][1];
    for (int i = 0; i < n; i++)
    {
        if (v[i][0] >= end)
        {
            take++;
            end = v[i][1];
        }
    }
    cout << take << "\n";
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// bool compare(vector<int> &a, vector<int> &b)
// {
//     return a[1] < b[1];
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>> v;
//     for (int i = 0; i < n; i++)
//     {
//         int start, end;
//         cin >> start >> end;
//         v.push_back({start, end});
//     }
//     sort(v.begin(), v.end(), compare);

//     int take = 1;
//     int end = v[0][1];
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i][0] >= end)
//         {
//             take++;
//             end = v[i][1];
//         }
//     }
//     cout << take << "\n";
//     return 0;
// }