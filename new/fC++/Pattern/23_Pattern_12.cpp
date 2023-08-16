// 5
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        int t=i;
        for(int j=1;j<=row-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<t<<" ";
            t-=1;
        }
        for(int j=1;j<i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }   
    return 0;
}