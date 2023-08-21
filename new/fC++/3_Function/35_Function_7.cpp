// Binary to Decimal

#include <bits/stdc++.h>
using namespace std;
int btd(int num)
{
    int sum = 0, x = 0;
    for (int i = num; i > 0; i = i / 10)
    {
        sum = sum + i % 10 * pow(2, x);
        x += 1;
    }
    return sum;
}

// int btd(int num)
// {
//     int sum = 0, x = 1;
//     while (num > 0)
//     {
//         int y = num % 10;
//         sum += x * y;
//         x *= 2;
//         num /= 10
//     }
//     return sum;
// }


int main()
{
    int bin;
    cin >> bin;
    cout << btd(bin) << endl;
    return 0;
}



