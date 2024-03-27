// Double pointer

#include <bits/stdc++.h>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1;
    // // anything changes? NO

    // *p2 = *p2 + 1;
    // // anything changes?

    **p2 = **p2 + 1;
    // anything changes?
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    /*
        cout << "ALL OK" << endl;
        cout << "Printing p: " << p << endl;
        // cout << "Address of p: " << &p << endl;

        // Print value of i (different methods)
        cout << *p << endl;
        cout << i << endl;
        cout << *p << endl;
        cout << **p2 << endl;

        // Print value of p (different methods)
        cout << &i << endl;
        cout << p << endl;
        cout << *p2 << endl;

        cout << &p << endl;
        cout << p2 << endl;
    */

    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;
    update(p2);
    cout << "After: " << i << endl;
    cout << "After: " << p << endl;
    cout << "After: " << p2 << endl;

    return 0;
}