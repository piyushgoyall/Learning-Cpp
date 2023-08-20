// function factorial

#include <bits/stdc++.h>
using namespace std;
int factorial(int num)
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
    int num;
    cin >> num;
    cout << factorial(num);
    return 0;
}