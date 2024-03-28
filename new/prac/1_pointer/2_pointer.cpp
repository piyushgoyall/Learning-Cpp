#include <bits/stdc++.h>
using namespace std;
int main()
{
    // IMP concept
    int i = 3;
    int *t = &i;

    // cout << (*t)++ << endl; // it is a good practice to write this like (*t)++ and not *t++

    *t = *t + 1;
    cout << *t << endl;
    cout<<"Before t: "<<t<<endl;
    t=t+1;
    cout<<"After t: "<<t<<endl;

    /* */

    // int num = 5;
    // int a = num;
    // cout << "Before: " << num << endl;
    // a++;
    // cout << "After: " << num << endl;

    // int *p = &num;
    // cout << "Before: " << num << endl;
    // (*p)++;
    // cout << "After: " << num << endl;

    // // COPY A POINTER
    // int *q = p;
    // cout << p << " - " << q << endl;
    // cout << *p << " - " << *q << endl;

    /* */

    // int i = 5;

    // int *q = &i;
    // cout << q << endl;
    // cout << *q << endl;

    // int *p = 0;
    // p = &i;

    // cout << p << endl;
    // cout << *p << endl;

    /* */

    // // if we write something like int *p, then this creates a pointer to an integer and points to some garbage value which is a not a good practice.
    // int *p = 0;
    // cout << *p << endl;

    /* */

    // int num = 5;
    // cout << num << endl;

    // // address of operator - &
    // cout << "Address of num is: " << &num << endl;

    // int *ptr = &num;

    // cout << "Address is: " << ptr << endl;
    // cout << "Value is: " << *ptr << endl;

    // double d = 4.3;
    // double *p2 = &d;

    // cout << "Address is: " << p2 << endl;
    // cout << "Value is: " << *p2 << endl;

    // cout << "Size of integer is: " << sizeof(num) << endl;
    // cout << "Size of pointer is: " << sizeof(ptr) << endl;
    return 0;
}