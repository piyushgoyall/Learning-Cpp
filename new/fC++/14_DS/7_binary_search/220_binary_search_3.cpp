// Painter's Partition Problem
// n - length of n different boards
// m - painters available
// A painter paints 1 unit of board in 1 unit of time & each painter will paint consecutive boards.
// Find the minimum time that will be required to paint all the boards.

// Strategy: Apply binary search for minimum & maximum possible values of 'min' length of boards to be painted.
// Check the feasibility of this chosen value
// Check feasibility: Assign boards to each painter in a sequntial manner, while the current length of assigned boards don't exceed the value set by binary search
//                    If during allocation the number of painters don't exceed the limit of 'm' then the solution is feasible. Else, it isn't

#include <bits/stdc++.h>
using namespace std;

int findFeasible(int boards[], int n, int limit)
{
    int sum = 0, painters = 1;
    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
        if (sum > limit)
        {
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}

int painterPartition(int boards[], int n, int m)
{
    int totalLength = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        k = max(k, boards[i]);
        totalLength += boards[i];
    }

    int low = k, high = totalLength;
    while (low < high)
    {
        int mid = (low + high) / 2;
        int painters = findFeasible(boards, n, mid);
        if (painters <= m)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int m = 2;
    cout << "Minimum time to paint boats: " << painterPartition(arr, n, m);
    cout << endl;
    return 0;
}