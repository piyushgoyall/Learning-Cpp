#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mx = -19999999;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << "\t";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int x;
//     cin >> x;
//     int maxim = arr[0];
//     for (int i = 0; i < x; i++)
//     {
//         if (arr[i] > maxim)
//         {
//             maxim = arr[i];
//         }
//     }
//     cout << maxim << endl;
//     return 0;
// }