/*

5
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}