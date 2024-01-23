// Subarray with palindromic concatenation
// Subarray of size k with palindromic concatenation
// Palindrome : Words that are spelled the same from forward as well as backward. (Eg. NITIN, 2243422, MADAM, RACECAR< 797)
// Problem : For a given array and an integer K, check if any subarray of size K exists in the array such that concatenation of elements form a palindrome.
// Approach 1 : Generate all subarrays of size K (Time Complexity = O(n^2))
//              Check if their concatenation forms a palindrome (TIME COMPLEXITY = O(n))
//              Total Time Complexity = O(n^3)
// Approach 2 : 1) Store concatenation of initial K elements.
//              2) Iterate over the array & start deleting elements from the start and adding elements from the end
//              3) At each step, check if concatenation is a palindrome (TIME COMPLEXITY = O(n^2))

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int temp = n, number = 0;

    while (temp > 0)
    {
        number = number * 10 + temp % 10;
        temp = temp / 10;
    }

    if (number == n)
    {
        return true;
    }

    return false;
}

int findPalindromicSubarray(vector<int> arr, int k)
{
    int num = 0;

    for (int i = 0; i < k; i++)
    {
        num = num * 10 + arr[i];
    }

    if (isPalindrome(num))
    {
        return 0;
    }

    for (int j = k; j < arr.size(); j++)
    {
        num = (num % (int)pow(10, k - 1)) * 10 + arr[j];
        if (isPalindrome(num))
        {
            return j - k + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 5, 1, 1, 5};
    int k = 4;
    int ans = findPalindromicSubarray(arr, k);
    if (ans == -1)
    {
        cout << "Palindromic Subarray Doesn't exist" << endl;
    }
    else
    {
        for (int i = ans; i < ans + k; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}