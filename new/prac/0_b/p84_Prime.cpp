// Print all primes from 2 to n.
// Print lowest prime and highest prime.
// Print all the prime divisors of a number.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> arr(n + 1, true);
    arr[0] = false;
    arr[1] = false;

    vector<int> lp(n + 1, 0);
    vector<int> hp(n + 1, 0);

    // for (int i = 2; i <= n; i++)
    // {
    //     for (int j = i; j <= n; j++)
    //     {
    //         if (j != i && j % i == 0)
    //             arr[j] = false;
    //     }
    // }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i])
        {
            lp[i] = hp[i] = i;
            for (int j = i * 2; j <= n; j += i)
            {
                arr[j] = false;
                hp[j] = i;

                if (lp[j] == 0)
                    lp[j] = i;
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        if (arr[i])
            cout << i << " ";
    }

    cout << endl;

    for (int i = 0; i <= n; i++)
    {
        cout << i << "  LP: " << lp[i] << " HP: " << hp[i] << endl;
    }

    // cout << endl;

    // int lowP = 1;
    // for (int i = 2; i <= n; i++)
    // {
    //     if (arr[i] == 1 && n % i == 0)
    //     {
    //         lowP = i;
    //         break;
    //     }
    // }

    // cout << lowP << endl;

    // int highP = 1;
    // for (int i = 2; i <= n; i++)
    // {
    //     if (arr[i] == 1 && n % i == 0)
    //     {
    //         highP = i;
    //     }
    // }

    // cout << highP << endl;

    return 0;
}