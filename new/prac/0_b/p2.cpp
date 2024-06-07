//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i)
        {
            cout << "  ";
            j++;
        }

        int k = 1;
        while (k <= i)
        {
            cout << k << " ";
            k++;
        }

        int l = 1;
        while (l < i)
        {
            cout << i - l << " ";
            l++;
        }
        cout << endl;
        i++;
    }
    return 0;
}