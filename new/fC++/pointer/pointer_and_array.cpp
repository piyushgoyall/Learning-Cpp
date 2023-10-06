#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30};
    cout << *arr << endl;
    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << "\t";
        *ptr++;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << "\t";
    }

    return 0;
}