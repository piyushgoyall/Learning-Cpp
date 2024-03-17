// Number Theory Advanced
// Diophantine Equations: These are the polynomial equations for which integral solution exists.
// Example: 3x + 7y = 1 or x^2 - y^2 = z^3
//                  ax + by = c
//                Note: a,b,c belong to Integers
// Solution to these equations exist only if gcd(a,b) divides c.
// APPLICATIONS:
// Extended Euclid Algorithm
// GCD(a,b) has the property that:
//                                ax + by = gcd(a,b)      **** IMP ****
// Now, we have to find the values of x and y
// ax + by = gcd(a, b)
// gcd(a, b) = gcd(b, a % b)
// gcd(b, a % b) = bx1 + (a % b)y1
// a % b = a- (a/b) * b
// From the above equations we get,
// ax + by = bx1 + (a % b)y1
// ax + by = bx1 + (a - (a/b) * b)y1
// ax + by = ay1 + b(x1 - (a/b) * y1)
// Comparing the coefficients of a and b,
// we get           x = y1
//               y = x1 - (a/b) * y1

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 2, MOD = 1e9 + 7;
// ax + by = gcd(a, b)
// gcd(d,0) = d;
// ax + 0 = a -> x = 1
// y = 0

struct triplet
{
    int x, y, gcd;
};

triplet extendedEuclid(int a, int b)
{
    if (b == 0)
    {
        triplet ans;
        ans.x = 1;
        ans.gcd = a;
        ans.y = 0;
        return ans;
    }

    triplet smallAns = extendedEuclid(b, a % b);
    triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a / b) * smallAns.y;
    return ans;
}

signed main()
{
    int a, b;
    cin >> a >> b;

    triplet ans = extendedEuclid(a, b);
    cout << ans.gcd << " " << ans.x << " " << ans.y << endl;
    return 0;
}