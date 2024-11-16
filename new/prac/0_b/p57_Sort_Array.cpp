#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr, int temp)
{
    if (arr.size() == 0 || arr[arr.size() - 1] <= temp)
    {
        arr.push_back(temp);
        return;
    }

    int val = arr[arr.size() - 1];
    arr.pop_back();

    insert(arr, temp);
    arr.push_back(val);
}

void sort(vector<int> &arr)
{
    if (arr.size() == 1)
        return;

    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sort(arr);
    insert(arr, temp);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}