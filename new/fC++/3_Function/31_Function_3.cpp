// function fibonacci

#include <bits/stdc++.h>
using namespace std;
void fib(int num)
{
    int a = 0;
    int b = 1;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        cout << a << "\t";
        sum = a + b;
        a = b;
        b = sum;
    }
}
int main()
{
    int num;
    cin >> num;
    fib(num);
    return 0;
}