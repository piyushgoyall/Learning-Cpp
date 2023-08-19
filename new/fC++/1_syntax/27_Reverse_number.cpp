#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int rev=0;
    for(int i=num;i>0;i=i/10)
    {
        rev = rev*10+(i%10);
    }   
    cout<<rev<<endl;
    return 0;
}