#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];

    // ERROR
    // arr = arr + 1

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    /* */

    // int a[20] = {1, 2, 3, 4};
    // cout << &a[0] << endl;
    // // cout << &a << endl;
    // // cout << a << endl;

    // int *p = &a[0];
    // // cout << p << endl;
    // // cout << *p << endl;
    // cout << &p << endl;

    /* */

    // int temp[10] = {10, 23, 39, 41};
    // cout << "1: " << sizeof(temp) << endl;
    // cout << "2: " << sizeof(*temp) << endl;
    // cout << "3: " << sizeof(&temp) << endl;

    // int *ptr = &temp[0];
    // cout << "4: " << sizeof(ptr) << endl;
    // cout << "5: " << sizeof(*ptr) << endl;
    // cout << "6: " << sizeof(&ptr) << endl;

    /* */

    // int arr[10] = {2, 11, 40, 56};

    // cout << "Address of first memory block is: " << arr << endl;
    // cout << arr[0] << endl;
    // cout << "Address of first memory block is: " << &arr[0] << endl;
    // cout << "4'th: " << *arr << endl;
    // cout << "5'th: " << *arr + 1 << endl;
    // cout << "6'th: " << *(arr + 1) << endl;
    // cout << "7'th: " << *(arr) + 1 << endl;

    // cout << "8'th: " << arr[2] << endl;
    // cout << "9'th: " << *(arr + 2) << endl; // arr[i] = *(arr + i)
    // int i = 2;
    // cout << "10'th: " << i[arr] << endl; // i[arr] = *(i + arr)
    return 0;
}