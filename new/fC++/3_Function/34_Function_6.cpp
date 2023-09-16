// Pascal Triangle

#include <bits/stdc++.h>
using namespace std;
int fac(int num)
{
    int pro = 1;
    for (int i = 1; i <= num; i++)
    {
        pro = pro * i;
    }
    return pro;
}
int main()
{
    int rows;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fac(i) / (fac(i - j) * fac(j)) << " ";
        }
        cout << endl;
    }
    return 0;
}