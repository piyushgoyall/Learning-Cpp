// Find the first and last occurence of a number in an array.

#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstOcc(arr, n, i + 1, key);
}

int lastOcc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restArr = lastOcc(arr, n, i + 1, key);
    if (restArr != -1)
    {
        return restArr;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
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
    int key;
    cout << "Enter key value: ";
    cin >> key;
    cout << firstOcc(arr, n, 0, key);
    cout << "\n";
    cout << lastOcc(arr, n, 0, key);
    return 0;
}