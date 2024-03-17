// Expedi - Greedy Algorithm
// Question: A group of cows grabbed a truck and ventured on an expedition (a long journey for a specific purpose) deep into the Jungle.
// The truck leaks one unit of fuel every unit of distance it travels.
// To repair this truck the cows need to drive to the nearest town(no more than 10^6 units distance)
// On this road, between the town and the current location, there are N(1 <= N <= 10^6) fuel stops where the cows can stop to acquire
// additional fuel (1 .... 100  units at each stop).
// The cows want to make the minimum possible number of stops for fuels on the way to town.
// Capacity of the truck is sufficiently large to hold any amount of fuel.
// Initial units of fuel: P(1 <= P <= 10^6)
// Initial distance from town: L
// Determine minimum number of stops to reach the town.
// BRUTE FORCE: 1) Generate all subsequences of stops.
//              2) Iterate over all subsequences, choose the one that is feasible and has minimum no. of stops.
// Time Complexity: O(2^n) (Result in TLE)
// OPTIMAL SOLUTION (Greedy Algorithm)
// 1) Create a max heap, which stores the fuels available at the stops that we have traversed.
// 2) Sort the stops on the basis of distance of stops from intital position of truck.
// 3) Keep iterating on the stops and whenever fuel in the tank of truck becomes empty, take the fuel from the maxheap and add it to the truck (greedy step).
// 4) Maintain the count of stops from which we have taken fuel.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        int l, p;
        cin >> l >> p;

        for (int i = 0; i < n; i++)
        {
            a[i].first = l - a[i].first;
        }
        sort(a.begin(), a.end());
        int ans = 0;
        int curr = p;

        priority_queue<int, vector<int>> pq;
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (curr >= l)
                break;

            while (curr < a[i].first)
            {
                if (pq.empty())
                {
                    flag = 1;
                    break;
                }
                ans++;
                curr += pq.top();
                pq.pop();
            }
            if (flag)
                break;
            pq.push(a[i].second);
        }

        if (flag)
        {
            cout << "-1" << endl;
            continue;
        }

        while (!pq.empty() && curr < l)
        {
            curr += pq.top();
            pq.pop();
            ans++;
        }
        if (curr < l)
        {
            cout << "-1" << endl;
            continue;
        }
        cout << ans << endl;
    }
    return 0;
}
