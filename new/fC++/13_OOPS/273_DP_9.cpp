// Problem : Given an array of integers where each element represents the max number of steps that can be made forward from that element.
// WAP to return the minimum number of jumps to reach the end of the array(starting from the first element).
// If an element is 0, they cannot move through that element.

// DP States
// - Jumps [i] indicates the minimum number of jumps needed to reach arr[i] from arr[0].
// - We start from i=0, and we have to find jumos[n-1]
// - For calculating jumps[i], we run a nested loop 'j' from 0 to i-1.

// Pseudocode
// jumps[0] = 0;
// for (int i = 1; i < n; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//         if (i <= j + arr[j])
//         {
//             jumps[i] = min(jumps[i], jumps[j] + 1);
//             break;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
    vector<int> jumps(n, inf);
    if (arr[0] == 0)
    {
        cout << inf << " ";
        return 0;
    }
    jumps[0] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i <= (j + arr[j]))
            {
                jumps[i] = min(jumps[i], jumps[j] + 1);
            }
        }
    }
    cout << jumps[n - 1];
    return 0;
}