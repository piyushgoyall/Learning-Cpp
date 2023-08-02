// skip number divisible by 3

#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<100;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }   
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int pocketmoney=3000;
//     for(int date=1;date<=30;date++)
//     {
//         if(date%2==0)
//         {
//             continue;
//         }
//         if(pocketmoney==0)
//         {
//             break;
//         }
//         cout<<"Go out today i.e. "<<date<<" "<<endl;
//         pocketmoney-=300;
//     }   
//     return 0;
// }