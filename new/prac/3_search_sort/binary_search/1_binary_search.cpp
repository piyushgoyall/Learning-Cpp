#include <bits/stdc++.h>
using namespace std;

int biSrh(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + ((e - s) / 2);
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int even[6]{2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    cout << biSrh(even, 6, 12) << endl;
    cout << biSrh(odd, 5, 1);
    return 0;
}