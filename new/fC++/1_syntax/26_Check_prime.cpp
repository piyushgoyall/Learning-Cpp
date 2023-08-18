#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Non-Prime"<<endl;
            flag = 1;
            break;
        }
    }   
    if(flag==0)
    {
        cout<<"Prime"<<endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int i;
//     for(i=2;i<num;i++)
//     {
//         if(num%i==0)
//         {
//             cout<<"Non-Prime";
//             break;
//         }
//     }   
//     if(num==i)
//     {
//         cout<<"Prime"<<endl;
//     }
//     return 0;
// }