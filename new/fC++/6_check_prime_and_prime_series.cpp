// // check prime

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
//             cout<<"Non Prime";
//             break;
//         }
//     }
//     if(i==num)
//     {
//         cout<<"Prime";
//     }

//     return 0;
// }

// prime series

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int start, end;
    cin >> start >> end;
    int i, j;
    for (int i = start; i <= end; i++)
    {
        for (j = 2; j<i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<i<<"\t";
        }
    }
    return 0;
}