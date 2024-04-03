// Find square root of a number

#include <bits/stdc++.h>
using namespace std;

long long int floorSqrt(int n)
{
    int s = 0, e = n;
    long long int mid = s + (e - s) / 2, ans = -1;
    while (s <= e)
    {
        if ((mid * mid) == n)
        {
            return mid;
        }

        else if ((mid * mid) < n)
        {
            s = mid + 1;
            ans = mid;
        }

        else if ((mid * mid) > n)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int tempsol = floorSqrt(n);
    cout << "Answer is: " << morePrecision(n, 3, tempsol);
    return 0;
}