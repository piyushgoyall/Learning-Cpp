#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num%2 == 0 && num%3 == 0)
    {
        cout<<"Number is divisible by both 2 and 3";
    }
    else
    {
        cout<<"Number is not divisible by 2 and 3";
    }
    return 0;
}