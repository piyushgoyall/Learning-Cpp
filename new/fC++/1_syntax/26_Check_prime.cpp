#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"Non-Prime";
            break;
        }
    }   
    if(num==i)
    {
        cout<<"Prime"<<endl;
    }
    return 0;
}