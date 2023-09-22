// LONGEST INCREASING SUBSEQUENCE.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = 1;
    }

    int prev[n];
    for (int i = 0; i < n; i++)
    {
        prev[i] = -1;
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] > nums[j] && temp[i] < temp[j] + 1)
            {
                temp[i] = temp[j] + 1;
                prev[i] = j;
            }
        }
        if (temp[i] > temp[maxIndex])
        {
            maxIndex = i;
        }
    }

    int maxLength = temp[maxIndex];
    int lis[maxLength];
    int currentIndex = maxIndex;
    int lisIndex = maxLength - 1;
    while (currentIndex >= 0)
    {
        lis[lisIndex] = nums[currentIndex];
        lisIndex--;
        currentIndex = prev[currentIndex];
    }

    cout << "Longest Increasing Subsequence: ";
    for (int i = 0; i < maxLength; i++)
    {
        cout << lis[i] << " ";
    }
    cout << endl;

    return 0;
}