// Print all subarrays.

/*
1 2 3 4
(1)  (1,2)  (1,2,3)  (1,2,3,4)  (2)  (2,3)  (2,3,4)  (3)  (3,4)  (4)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}