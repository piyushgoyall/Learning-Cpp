#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    // variable size array
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Sum is: " << ans;

    delete[] arr;

    // int *arr = new int[5];
    // cout << sizeof(arr) << endl;

    return 0;
}

/*

while(true)
{
    int i = 5; // isme har baar while loop mai int ke liye 4 byte use ho rhi hai aur phir release ho rhi hai
}

while(true)
{
    int *ptr = new int; // isme ptr ke liye to 8 byte use aur relese ho rhi hai par new int ke 4 byte nhi ho rahe vo har loop mai 4 byte use kar rha hai which can lead to crash
}

*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char ch = 'q';
//     cout << sizeof(ch) << endl;

//     char *c = &ch;
//     cout << sizeof(c) << endl;
//     return 0;
// }