#include <bits/stdc++.h>
using namespace std;

bool isPrime(int i)
{
    for (int j = 2; j <= sqrt(i); j++)
    {
        if ((i % j) == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    if (n <= 1)
    {
        cout << "Input a bigger number" << endl;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (isPrime(i))
            {
                arr.push_back(i);
            }
        }
    }

    for (int i : arr)
        cout << i << " ";
    return 0;
}