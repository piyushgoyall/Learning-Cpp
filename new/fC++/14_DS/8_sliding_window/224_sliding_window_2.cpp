// Minimum Subarray Sum
// Problem : For a given array and an integer X, find the minimum subarray size for which sum > X.
// Approach 1 : Compute sum of all subarrays & check the condition (Time Complexity : O(N^2))
// Approach 2 : 1) Use variables ans, sum and start
//              2) Iterate over array & start adding elements to sum
//              3) If sum > X, remove elements from the start.  (Time Complexity : O(n))

#include <bits/stdc++.h>
using namespace std;

int smallestSubarraySum(int arr[], int n, int x)
{
    int sum = 0, minLength = n + 1, start = 0, end = 0;
    while (end < n)
    {
        while (sum <= x && end < n)
        {
            sum += arr[end++];
        }
        while (sum > x && start < n)
        {
            if (end - start < minLength)
            {
                minLength = end - start;
            }
            sum -= arr[start++];
        }
    }
    return minLength;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n = 6;

    int minLength = smallestSubarraySum(arr, n, x);
    if (minLength == n + 1)
    {
        cout << "No such subarray exists!" << endl;
    }
    else
    {
        cout << "Smallest length subarray is : " << minLength << endl;
    }
    return 0;
}
