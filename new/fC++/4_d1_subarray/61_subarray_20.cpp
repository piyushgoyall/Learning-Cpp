// Pair sum problem
// Check if there exists two elements in an array such that their sum is equal to given k.

#include <bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << " " << j <<endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout<<"Enter: ";
    cin >> k;
    cout << pairsum(arr, n, k) << endl;
    return 0;
}