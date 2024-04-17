// Pointer MCQ

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;

    /*

    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;

    */

    /*

    char str[] = "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] << endl;

    */

    /*

    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;

    */

    /*

    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl;

    */

    /*

    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout << *ptr << endl;

    */

    /*

    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;
    cout << *ptr << endl;

    */

    /*

    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[2] << endl;

    */

    /*

    int arr[6] = {11, 21, 13};
    cout << (arr + 1) << endl;

    */

    /*

    int arr[6] = {11, 12, 31};
    cout << arr << " " << &arr << endl;

    */

    /*

    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr + 1) << endl;

    */

    /*

    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    */

    /*

    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;

    */

    /*

    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout << first << " " << second << endl;

    */

    /*

    int *p = 0;
    int first = 110;
    *p = first;
    cout << *p << endl;

    */

    /*

        int first = 8;
        int *p = &first;
        cout << (*p)++ << " ";
        cout << first << endl;

        */

    /*

    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;

    */

    /*

        int first = 8;
        int second = 18;
        int *ptr = &second;
        *ptr = 9;
        cout << first << " " << second << endl;

    */

    return 0;
}