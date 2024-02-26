// Number Theory Advanced
// Multiplicative Modulo Inverse
// Consider this equation:   (A x B) % m = 1
// Examples             Answers
// (17 x B) % 3 = 1        2
// (14 x B) % 5 = 1        4
// (12 x B) % 7 = 1        3
// (19 x B) % 2 = 1        1
// Note: Multiplicative Modulo Inverse exists only if A and m are coprime i.e. gcd(A,m) = 1
// A * B  ≡ 1 (mod m)
// (A * B - 1)  ≡ 0 (mod m)
// A * B - 1 = mq
// A * B + mQ = 1 (B = Value of x in our Extended Euclid Algorithm)

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 2, MOD = 1e9 + 7;

// ax + by = gcd(a,b)
// ax + 0 = a
// gcd(d,0) = d
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
    ans.x = smallAns.y;
    ans.gcd = smallAns.gcd;
    ans.y = smallAns.x - (a / b) * smallAns.y;
    return ans;
}

int multiplicativeModuloInverse(int a, int m)
{
    triplet temp = extendedEuclid(a, m);
    return temp.x;
}

signed main()
{
    int a, m;
    cin >> a >> m;
    cout << multiplicativeModuloInverse(a, m) << endl;
    return 0;
}