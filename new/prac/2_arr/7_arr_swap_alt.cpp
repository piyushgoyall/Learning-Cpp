#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void altSwap(int arr[], int n)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[5] = {1, 4, 3, 5, 8};
    altSwap(arr, 5);
    printArray(arr, 5);
    return 0;
}

// // Swap alternate elements in an array.

// #include <bits/stdc++.h>
// using namespace std;

// void printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void altSwap(int arr[], int n)
// {
//     for (int i = 0; i < n; i += 2)
//     {
//         if (i + 1 < n)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }

// int main()
// {
//     int arr[6] = {1, 3, 2, 7, 11, 8};
//     int brr[5] = {11, 33, 9, 76, 43};

//     altSwap(arr, 6);
//     printArr(arr, 6);

//     cout << endl;

//     altSwap(brr, 5);
//     printArr(brr, 5);

//     return 0;
// }