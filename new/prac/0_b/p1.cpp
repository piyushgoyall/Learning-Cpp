// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1, j;
    while (i <= n)
    {
        j = 0;
        while (j < i)
        {
            cout << j + i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}