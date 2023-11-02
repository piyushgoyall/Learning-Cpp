#include <iostream>
#include <string.h>
using namespace std;
class Add
{
public:
    int a, b;
    Add(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void plus()
    {
        cout << a + b << endl;
    }
};
int main()
{
    int p, q;
    cin >> p >> q;
    Add a(p, q);
    a.plus();
}

// #include <bits/stdc++.h>
// using namespace std;
// class Inclassfun
// {
// public:
//     int num1;
//     int num2;
//     void plus()
//     {
//         cout << "Sum: " << num1 + num2;
//     }
// };
// int main()
// {
//     Inclassfun i;
//     // i.num1 = 10;
//     // i.num2 = -5;
//     cin>>i.num1>>i.num2;
//     i.plus();
//     return 0;
// }

// // *************************** CLASS *******************************

// #include <bits/stdc++.h>
// using namespace std;
// class New
// {
// public:
//     int num1;
//     int num2;
// };
// int main()
// {
//     New n;
//     n.num1 = 5;
//     n.num2 = 5;
//     cout << n.num1 + n.num2;
//     return 0;
// }