// Form Number Divisible by 3
// Number formed from subarray of size k, divisible by 3
// Problem : For a given array and an integer K, check if any subarray of size K exists in the array such that elements in the subarray form a number divisible by 3.
// Approach 1 : Compute the numbers formed by all possible subarrays of sixe K. Check for their divisibility with 3. (Time Complexity = O(n^2))
// FACT : A number is divisible by 3  if and only if the sum of its digits is divisible by 3.
// Approach 2 : 1) sum of initial K elements from the array.
//              2) Use sliding window technique and one by one, start subtracting elements from the end & adding from the end.
//              3) At each step, check if sum divisible by 3 or not. If it is, print the elements. (TIME COMPLEXITY = O(n))

#include <bits/stdc++.h>
using namespace std;

void computeNumberFromSubarray(vector<int> arr, int k)
{
    pair<int, int> ans;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    bool found = false;
    if (sum % 3 == 0)
    {
        ans = make_pair(0, k - 1);
        found = true;
    }

    for (int j = k; j < arr.size(); j++)
    {
        if (found)
        {
            break;
        }

        sum = sum + arr[j] - arr[j - k];
        if (sum % 3 == 0)
        {
            ans = make_pair(j - k + 1, j);
            found = true;
        }
    }
    if (!found)
    {
        ans = make_pair(-1, 0);
    }
    if (ans.first == -1)
    {
        cout << "no such subarray exists" << endl;
    }
    else
    {
        for (int i = ans.first; i <= ans.second; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {84, 23, 45, 12, 56, 82};
    int k = 3;
    computeNumberFromSubarray(arr, k);
    return 0;
}