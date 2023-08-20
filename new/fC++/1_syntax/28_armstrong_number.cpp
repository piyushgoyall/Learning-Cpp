#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int sum=0;
    int temp=num;
    while(num>0)
    {
        sum = sum+pow((num%10),3);
        num=num/10;
    }   
    if(sum==temp)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not an armstrong number";
    }
    return 0;
}