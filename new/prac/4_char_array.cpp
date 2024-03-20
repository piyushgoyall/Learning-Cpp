#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << "1 - " << arr << endl;

    cout << "2 - " << ch << endl;

    char *c = &ch[0];

    // prints entire string
    cout << "3 - " << c << endl;

    char temp = 'z';
    char *p = &temp;
    cout << "4 - " << p << endl;

    // char ch[6] = "abcdf";
    // char *c = "abcde";
    return 0;
}