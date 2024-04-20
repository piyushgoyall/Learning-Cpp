/* GLOBAL VARIABLE*/

#include <bits/stdc++.h>
using namespace std;

int score = 15;

void a(int &i)
{
    cout << score << " in a" << endl;
    cout << i << endl;
}

void b(int &i)
{
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main()
{
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);
    return 0;
}

/* LOCAL VARIABLE*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i = 5;
//     {
//         int i = 2;
//         cout << i << endl;
//     }
//     cout << i << endl;
//     return 0;
// }

/* SHARING VARIABLE USING REFERENCE VARIABLE*/

// #include <bits/stdc++.h>
// using namespace std;

// void a(int &i)
// {
//     cout << i << endl;
// }

// void b(int &i)
// {
//     cout << i << endl;
// }

// int main()
// {
//     int i = 5;
//     a(i);
//     b(i);
//     return 0;
// }