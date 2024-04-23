#include <bits/stdc++.h>
using namespace std;

bool linear(int *arr, int n, int key)
{
    if (n == 0)
        return false;

    if(arr[0] == key)
        return true;

    bool ans = linear(arr + 1, n - 1, key);
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    if (linear(arr, n, key))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}