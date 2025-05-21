// The optimization in this code focuses on improving efficiency, particularly in terms of memory usage.
// Instead of using a large 2D array to store the entire DP table, it uses two 1D arrays to keep track of
// only the current and previous rows, which drastically reduces the amount of memory required.
// This change lowers the space complexity from O(n * m) to O(n), where n is the length of the second string,
// because we only store what's necessary for the calculation. After each iteration,
// the previous row is updated with the current row's values, and the current row is discarded.
// While the algorithm still processes each character in both strings (so the time complexity remains O(n * m)),
// the memory footprint is much smaller, making it more suitable for handling large strings

#include <bits/stdc++.h>
using namespace std;

int EditDistanceOptimized(const string &s1, const string &s2, int Ci, int Cd, int Cs)
{
    int m = s1.length();
    int n = s2.length();

    if (m == 0)
        return n * Ci;
    if (n == 0)
        return m * Cd;

    vector<int> prev(n + 1), curr(n + 1);

    for (int j = 0; j <= n; j++)
    {
        prev[j] = j * Ci;
    }

    for (int i = 1; i <= m; i++)
    {
        curr[0] = i * Cd;
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                curr[j] = prev[j - 1];
            else
                curr[j] = min({prev[j] + Cd, curr[j - 1] + Ci, prev[j - 1] + Cs});
        }
        swap(prev, curr);
    }

    return prev[n];
}

int main()
{
    vector<string> dictionary = {"cred", "bet", "shat", "that", "brad", "cart", "brat", "card"};
    string input = "dat";
    int Ci = 1, Cd = 1, Cs = 1;

    cout << "Suggested words: ";

    for (const string &word : dictionary)
    {
        int dist = EditDistanceOptimized(input, word, Ci, Cd, Cs);
        if (dist <= 2)
            cout << word << " ";
    }

    cout << endl;
    return 0;
}
