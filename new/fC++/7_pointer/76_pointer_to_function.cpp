// Passing pointer to function.


#include <bits/stdc++.h>
using namespace std;
void increment(int *a)
{
    (*a)++;
}
int main()
{
    int a = 2;
    increment(&a);
    cout << a << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// void increment(int a)
// {
//     a++;
// }
// int main()
// {
//     int a = 2;
//     increment(a);
//     cout << a << endl;
//     return 0;
// }