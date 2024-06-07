// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

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
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }

        int s = 0;
        while (s < (i - 1) * 2)
        {
            cout << "* ";
            s++;
        }

        int k = 1, x = n - i + 1;
        while (k <= n - i + 1)
        {
            cout << x-- << " ";
            k++;
        }
        cout << endl;
        i++;
    }
    return 0;
}