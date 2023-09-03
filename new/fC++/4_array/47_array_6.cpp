// Selection Sort Method 1

#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int minf(int arr[], int st, int end)
{
    int mine = arr[st];
    for (int i = st + 1; i < end; i++)
    {
        if (arr[i] < mine)
            mine = arr[i];
    }
    return mine;
}
void selso(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int m = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[m])
                m = j;
        }
        swap(arr[i], arr[m]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << (arr[i]) << "  ";
    }
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
    selso(arr, n);
    return 0;
}