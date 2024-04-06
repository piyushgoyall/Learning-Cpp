#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    while (m > 0 && n > 0)
    {
        if (nums1[m - 1] > nums2[n - 1])
        {
            nums1[m + n - 1] = nums1[m-1];
            m--;
        }
        else
        {
            nums1[m + n - 1] = nums2[n-1];
            n--;
        }
    }

    while (n > 0)
    {
        nums1[n - 1] = nums2[n];
        n--;
    }
}

int main()
{
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    int m = 3;
    int n = 3;
    merge(nums1, m, nums2, n);

    for (int num : nums1)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int arr1[9] = {1, 2, 3, 0, 0, 0, 0};
//     // int arr2[4] = {1, 2, 5, 6};
//     int arr1[6] = {1, 3, 5, 0, 0, 0};
//     int arr2[3] = {2, 4, 7};
//     int i = 0, j = 0;
//     while (i < 4)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             i++;
//         }
//         else if (arr2[j] < arr1[i])
//         {
//             swap(arr2[j], arr1[i]);
//             i++;
//         }
//         // else if(arr2[j]>arr1[i])
//         // {
//         //     j++;
//         // }
//     }
//     sort(arr2, arr2 + 3);
//     int x = 3;
//     while (x > 0)
//     {
//         arr1[6 - x] = arr2[3 - x];
//         x--;
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr1[i] << " ";
//     }
//     cout << endl;
//     // sort(arr2, arr2 + 3);
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr2[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(int arr1[], int n, int arr2[], int m, int arr3[])
// {
//     int i = 0, j = 0;
//     int k = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k++] = arr1[i++];
//         }
//         else
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     // copy first array elements
//     while (i < n)
//     {
//         arr3[k++] = arr1[i++];
//     }
//     while (j < m)
//     {
//         arr3[k++] = arr2[j++];
//     }
// }

// int main()
// {
//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[3] = {2, 4, 6};
//     int arr3[8] = {0};
//     merge(arr1, 5, arr2, 3, arr3);
//     for (int i = 0; i < 8; i++)
//     {
//         cout << arr3[i] << " ";
//     }
// }