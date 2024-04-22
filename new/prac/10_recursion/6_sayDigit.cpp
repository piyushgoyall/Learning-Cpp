// Return Four Two Three if I/P is: 423

#include <bits/stdc++.h>
using namespace std;

void sayDigit(int num, string *dig)
{

    if (num == 0)
    {
        return;
    }

    int rem = num % 10;

    // cout << dig[rem] << " ";

    sayDigit(num / 10,dig);

    cout << dig[rem] << " ";
}

int main()
{
    int num;
    cin >> num;

    string dig[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    sayDigit(num,dig);
    return 0;
}