// // sum of natural numbers (FOR LOOP).

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     int sum = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         sum += i;
//     }
//     cout << sum << endl;
//     return 0;
// }

// continuous input until entered number is negative.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num>0)
    {
        cout<<num<<endl;
        cin>>num;
    }   
    return 0;
}