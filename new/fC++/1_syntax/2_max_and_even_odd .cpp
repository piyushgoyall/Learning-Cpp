// // max of three numbers.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n1, n2, n3;
//     cin >> n1 >> n2 >> n3;
//     if (n1 > n2)
//     {
//         if (n1 > n3)
//         {
//             cout << n1 << " is greatest" << endl;
//         }
//         else
//         {
//             cout << n3 << " is greatest" << endl;
//         }
//     }
//     else
//     {
//         if (n2 > n3)
//         {
//             cout << n2 << " is greatest" << endl;
//         }
//         else
//         {
//             cout << n3 << " is greatest" << endl;
//         }
//     }
//     return 0;
// }

// odd even check

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }
    return 0;
}