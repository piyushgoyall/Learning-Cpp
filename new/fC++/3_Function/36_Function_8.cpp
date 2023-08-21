// Octal to Decimal

#include <bits/stdc++.h>
using namespace std;
int otd(int num)
{
    int sum = 0, x = 0;
    for (int i = num; i > 0; i = i / 10)
    {
        sum = sum + i % 10 * pow(8, x);
        x += 1;
    }
    return sum;
}

// int otd(int num)
// {
//     int sum = 0, x = 1;
//     while (num > 0)
//     {
//         int y = num % 10;
//         sum += x * y;
//         x *= 8;
//         num /= 10;
//     }
//     return sum;
// }

int main()
{
    int oct;
    cin >> oct;
    cout << otd(oct) << endl;
    return 0;
}
