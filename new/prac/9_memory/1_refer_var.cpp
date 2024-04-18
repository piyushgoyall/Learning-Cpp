// Reference Variable

// #include <bits/stdc++.h>
// using namespace std;

// int &func(int a)
// {
//     int num = a;
//     int &ans = num;
//     return ans;
// }

// int main()
// {
//     cout<<func(5);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void update2(int &n)
{
    n = n + 1;
}

void update1(int n)
{
    n = n + 1;
}

int main()
{
    int n = 5;
    cout << "Before: " << n << endl;
    // update1(n);
    update2(n);
    cout << "After: " << n << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i = 5;

//     // Create a reference variable

//     int &j = i;
//     cout << i << endl;
//     i++;
//     cout << i << endl;
//     j++;
//     cout << i << endl;
//     cout << j << endl;

//     return 0;
// }