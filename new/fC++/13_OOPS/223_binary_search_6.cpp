// Max Sum Of Subarray (Sliding Window Challenge)
// Max sum subarray of size = k & sum < X
// Problem : For a given array and integers K & X, find the maximum sum subarray of size K and having sum less than X.
// Approach 1 : Compute sum of all possible subarrays of size k (Time Complexity = O(n*K), this time comp. is too much in case k = n etc.)
// Approach 2 (Sliding Window) : 1) Calculate sum of first K elements.
//                               2) Initialize ans with this sum
// Time Complexity : O(n)        3) Iterate over the rest of the arr. Keep adding one element in sum & removing one from start.
//                                  Compare new sum with ans in each iteration

#include <bits/stdc++.h>
using namespace std;

void maxSubarraySum(int arr[], int n, int k, int x)
{
    int sum = 0, ans = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    if (sum < x)
    {
        ans = sum;
    }

    for (int i = k; i < n; i++)
    {
        sum = sum - arr[i - k];
        sum = sum + arr[i];

        if (sum < x)
        {
            ans = max(ans, sum);
        }
    }
    cout << ans << " is the maximum subarray sum (<x)" << endl;
}

int main()
{
    int arr[] = {7, 5, 4, 6, 8, 9};
    int k = 3;
    int x = 20;
    int n = 6;

    maxSubarraySum(arr, n, k, x);
    return 0;
}