#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    cin >> arr;
    int n = strlen(arr);
    cout << "String Length: " << n << endl;
    bool eq = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            eq = false;
            break;
        }
    }
    if (eq)
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";
    return 0;
}