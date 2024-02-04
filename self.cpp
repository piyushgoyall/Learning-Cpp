// BUBBLE SORT
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}

// // SELECTION SORT
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int min_idx=i;
//         for (int j = i+1; j < n; j++)
//         {
//             // int minn = INT_MAX;
//             if (arr[j] < arr[min_idx])
//                 min_idx = j;
//             // cout << "j = " << j << endl;
//             // minn = min(minn, arr[j]);
//         }
//         // cout << "arr[" << i << "] " << arr[i] << endl;
//         // cout << "minn = " << minn << endl;
//         swap(arr[i], arr[min_idx]);
//         // cout << "arr = ";

//         // cout << endl;
//     }
//     for (auto x : arr)
//         cout << x << " ";
//     return 0;
// }

// // Subarray Sum
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n >> q;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     vector<int> sum(n);
//     sum[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         sum[i] = sum[i - 1] + arr[i];
//     }

//     // for (auto x : sum)
//     // {
//     //     cout << x << " ";
//     // }

//     // cout<<sum[4]-sum[0]<<endl;

//     while (q--)
//     {
//         int l, r;
//         cin >> l >> r;
//         l = l - 1;
//         r = r - 1;
//         if (l > 0)
//             cout << sum[r] - sum[l - 1] << endl;
//         else
//             cout << sum[r] << endl;
//     }

//     return 0;
// }

// // Problem statement
// // You are given a string ‘S’. You are also given ‘M’ integers in an array ‘A’. You perform ‘M’ operations on this string. The operations are given in an array ‘A’ of size ‘M’.

// // You perform the operations in the order they appear in the array ‘A’. In the ‘i’th operation, you reverse the substring of ‘S’ from the position ‘A[i]’ to ‘len(S)’ - ‘A[i]’ - 1 (0 based).

// // Your task is to find the string after performing all the operations.

// // Example :
// // ‘S’ = “aabcd”, ‘M’ = 2, ‘A’ = [0, 1]
// // After 1st operation i.e, reversing from [0, 4], ‘S’ = “dcbaa”.
// // After 2nd operation i.e, reversing from [1, 3], ‘S’ = “dabca”.
// // Hence, the answer is “dabca”.
// // Detailed explanation ( Input/output format, Notes, Images )
// // Constraints :
// // 1 ≤ T ≤ 10
// // 1 ≤ len(S) ≤ 10^5
// // 1 ≤ M ≤ 10^5
// // Each ‘A[i]’ is such that the range [‘A[i]’, len(‘S’) - ‘A[i]’ - 1] is non-empty.
// // It is guaranteed that the sum of lengths of ‘S’ and ‘M’ is ≤ 10^5 for all test cases, respectively.

// // Time limit: 1 sec
// // Sample Input 1 :
// // 2
// // gaagbd
// // 3
// // 2 2 2
// // dbgd
// // 5
// // 1 1 1 0 0
// // Sample Output 1 :
// // gagabd
// // dgbd
// // Explanation For Sample Input 1 :
// // For test case 1:
// // Here, len(‘S’) = 6. So, we need to reverse the string ‘S’[2, 3] three times.
// // After 1st reversal: ‘S’ = “gagabd”.
// // After 2nd reversal: ‘S’ = “gaagbd”.
// // After 3rd reversal: ‘S’ = “gagabd”.
// // Hence, the answer is “gagabd”.

// // For test case 2:
// // Here, len(‘S’) = 4. We need to reverse the string ‘S’[1, 2], ‘S’[1, 2], ‘S’[1, 2], ‘S’[0, 3], ‘S’[0, 3].
// // After 1st reversal: ‘S’ = “dgbd”
// // After 2nd reversal: ‘S’ = “dbgd”
// // After 3rd reversal: ‘S’ = “dgbd”
// // After 4th reversal: ‘S’ = “dbgd”
// // After 5th reversal: ‘S’ = “dgbd”
// // Hence, the answer is “dgbd”.
// // Sample Input 2 :
// // 2
// // cgagbga
// // 4
// // 0 2 1 0
// // daa
// // 3
// // 1 0 1
// // Sample Output 2 :
// // cgagbga
// // aad

// #include <bits/stdc++.h>
// using namespace std;
// string reverseString(string s, int m, vector<int> &a)
// {
//     // Write your code here.
//     int p = s.length();
//     string S = s;
//     for (int i = 0; i < m; i++)

//     {
//         int j = a[i];
//         int k = p - a[i] - 1;
//         while (j < k)
//         {
//             swap(S[j], S[k]);
//             j++;
//             k--;
//         }
//     }
//     // int i = 0;
//     // while (m--)
//     // {
//     //     int j = a[i];
//     //     int k = p - a[i] - 1;
//     //     if (j < k)
//     //     {
//     //         reverse(s.begin() + j, s.begin() + k + 1);
//     //     }
//     //     j++;
//     //     k--;
//     // }
//     return S;
// }

// int main()
// {
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);

//     int m;
//     cout << "Enter the number of swaps: ";
//     cin >> m;

//     vector<int> swaps(m);
//     cout << "Enter the positions to swap: ";
//     for (int i = 0; i < m; i++)
//     {
//         cin >> swaps[i];
//     }

//     string result = reverseString(input, m, swaps);

//     cout << "Modified String: " << result << endl;

//     return 0;
// }

// Merge two sorted arrays

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     vector<int> arr1(n);
//     vector<int> arr2(m);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }

//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }

//     vector<int> final((n + m), 0);
//     int x = 0, y = 0, last = 0;

//     while (x < n && y < m)
//     {
//         if (arr1[x] <= arr2[y])
//         {
//             final[last++] = arr1[x++];
//         }
//         else
//         {
//             final[last++] = arr2[y++];
//         }
//     }

//     while (x < n)
//     {
//         final[last++] = arr1[x++];
//     }
//     while (y < m)
//     {
//         final[last++] = arr2[y++];
//     }

//     for (int i = 0; i < (n + m); i++)
//     {
//         cout << final[i] << " ";
//     }

//     // for (int i = 0; i < (m + n); i++)
//     // {
//     //     if (x < n && arr1[x] <= arr2[y])
//     //     {
//     //         final[i] = arr1[x++];
//     //         cout << x << " -- " << y << endl;
//     //         // x = x + 1;
//     //     }
//     //     else if (y < m && arr1[x] > arr2[y])
//     //     {
//     //         final[i] = arr2[y++];
//     //         cout << x << " -- " << y << endl;
//     //         // y = y + 1;
//     //     }

//     //     // while(x<n && y<m)
//     //     // {
//     //     //     int minn = min()
//     //     // }
//     //     last = i;
//     // }
//     // cout << x << " -- " << y << endl;
//     // for (int i = 0, j = 0, k = 0; i < n, j < m, k < (n + m); i++, j++, k++)
//     // {
//     //     final[k] = min(arr1[i], arr2[j]);
//     // }

//     // while (x < n && last < (n + m))
//     // {
//     //     final[last] = (arr1[x]);
//     //     last++;
//     // }
//     // while (y < m && last < (n + m))
//     // {
//     //     final[last] = (arr2[y]);
//     //     last++;
//     // }
//     // cout << last << endl;
//     // for (auto x : final)
//     // {
//     //     cout << x << " ";
//     // }

//     return 0;
// }

// // Rotate array clockwise

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, d;
//     cin >> n >> d;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     vector<int> temp(n);
//     for (int i = n - d, j = 0; i < n; i++, j++)
//     {
//         temp[j] = arr[i];
//     }
//     for (int i = 0, j = d; i < n - d; i++, j++)
//     {
//         temp[j] = arr[i];
//     }

//     for (auto x : temp)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

// // Rotate array clockwise

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, d;
//     cin >> n >> d;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     reverse(arr.begin(), arr.end());

//     reverse(arr.begin(), arr.begin() + d);
//     reverse(arr.begin() + d, arr.end());

//     for (auto i : arr)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

// // Reverse each word in string.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);

//     int count = 1;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == ' ')
//             count++;
//     }
//     // cout << count;

//     vector<string> arr(count);
//     int temp = 0;
//     for (int i = 0; i < count; i++)
//     {
//         string extra = "";
//         for (int j = temp; j < s.length(); j++)
//         {
//             if (s[j] == ' ')
//             {
//                 temp = j + 1;
//                 break;
//             }
//             else
//                 extra = extra + s[j];
//         }
//         arr[i] = extra;
//     }

//     for (int i = 0; i < count; i++)
//     {
//         reverse(arr[i].begin(), arr[i].end());
//     }

//     for (auto x : arr)
//     {
//         cout << x << " ";
//     }
//     // for (auto x : arr)
//     // {
//     //     cout << x << "  ";
//     // }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     vector<int> comm;
//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin >> ele;
//         comm.push_back(ele);
//     }

//     // for (auto i : comm)
//     // {
//     //     cout << i << " ";
//     // }

//     int maxx = 0;
//     int ind_st, ind_end, i, j;
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (comm[i] <= comm[j])
//             {
//                 maxx = max(maxx, (comm[j] - comm[i]));
//                 // ind_st = i;
//                 // ind_end = j;
//             }
//         }
//     }
//     cout << "Profit : " << maxx << endl;
//     // cout << comm[i] << " " << comm[j] << endl;
//     // cout << i << " " << j << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q;
//     cout << "Enter the value of N and Q : ";
//     cin >> n >> q;

//     vector<int> arr;
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin >> ele;
//         arr.push_back(ele);
//     }

//     int l, r, start, end;
//     cout << "Enter l and r: ";
//     while (q--)
//     {
//         cin >> l >> r;
//         if (l - 1 >= 0 && r - 1 < n && l <= r)
//         {
//             start = l - 1;
//             end = r - 1;

//             // Reverse the subarray from index l to r
//             reverse(arr.begin() + start, arr.begin() + end + 1);

//             // Print the modified array
//             for (auto i : arr)
//             {
//                 cout << i << " ";
//             }
//             cout << endl; // Print a new line after each query
//         }
//         else
//         {
//             cout << "Invalid query. Please enter valid indices." << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Score
// {
//     int num;

// public:
//     Score()
//     {
//         num = 0;
//     }
//     Score(int n)
//     {
//         num = n;
//     }
//     int getNum()
//     {
//         return num;
//     }
// };

// int main()
// {
//     Score sc(5);
//     cout<<sc.getNum();
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Ball
// {
//     double radius;
//     string color;

// public:
//     Ball()
//     {
//         radius = 0;
//         color = "";
//     }
//     Ball(double r, string c)
//     {
//         radius = r;
//         color = c;
//     }
//     void printVolume();
//     void printRadius();
//     friend void setRadius(Ball &b, double r);
// };

// void Ball::printVolume()
// {
//     cout << (4 / 3) * 3.142 * radius * radius * radius << endl;
// }

// void Ball::printRadius()
// {
//     cout << radius << endl;
// }

// void setRadius(Ball &b, double r)
// {
//     b.radius = r;
// }

// int main()
// {
//     Ball b(30, "green");
//     cout << "Radius: ";
//     b.printRadius();
//     setRadius(b, 60);
//     cout << "New radius: ";
//     b.printRadius();
//     cout << "Volume: ";
//     b.printVolume();
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Collector
// {
//     int *list;
//     int size;
//     int capacity;

// public:
//     Collector()
//     {
//         list = nullptr;
//         size = 0;
//         capacity = 0;
//     }

//     Collector(int cap)
//     {
//         capacity = cap;
//         size = 0;
//         list = new int[capacity];
//     }

//     bool append(int v)
//     {
//         if (size < capacity)
//         {
//             list[size++] = v;
//             return true;
//         }
//         return false;
//     }

//     void dump()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << list[i] << " ";
//         }
//         cout << endl;
//     }

//     ~Collector()
//     {
//         cout << "Deleting the object " << endl;
//         if (capacity > 0)
//             delete[] list;
//     }
// };

// int main()
// {
//     Collector c(10);
//     for (int i = 0; i < 15; i++)
//     {
//         cout << c.append(i) << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     cout << "Enter array elements: ";
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int maxim = *max_element(arr, arr + n);

//     // initialising the frequencyArray elements to 0.
//     int freqArray[maxim + 1];
//     for (int i = 0; i <= maxim; i++)
//     {
//         freqArray[i] = 0;
//     }

//     // increasing frequencies
//     for (int i = 0; i < n; i++)
//     {
//         freqArray[arr[i]] = freqArray[arr[i]] + 1;
//     }

//     // making sumArray
//     int sumArray[maxim + 1];
//     sumArray[0] = freqArray[0];
//     for (int i = 1; i <= maxim; i++)
//     {
//         sumArray[i] = freqArray[i] + sumArray[i - 1];
//     }

//     int finalArray[n], newValue;
//     for (int i = 0; i < n; i++)
//     {
//         finalArray[--sumArray[arr[i]]] = arr[i];
//     }

//     cout << "Sorted Array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << finalArray[i] << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     cout << "Enter array elements: ";
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int maxim = *max_element(arr, arr + n);
//     // cout<<maxim;

//     // initialising the frequencyArray elements to 0.
//     int freqArray[maxim + 1];
//     for (int i = 0; i <= maxim; i++)
//     {
//         freqArray[i] = 0;
//     }

//     // increasing frequencies
//     for (int i = 0; i < n; i++)
//     {
//         freqArray[arr[i]]++;
//     }

//     for (int i = 0; i <= maxim; i++)
//     {
//         cout << freqArray[i] << " ";
//     }
//     cout << "\n";

//     // making sumArray
//     int sumArray[maxim + 1];
//     sumArray[0] = freqArray[0];
//     for (int i = 1; i <= maxim; i++)
//     {
//         sumArray[i] = freqArray[i] + sumArray[i - 1];
//     }

//     for (int i = 0; i <= maxim; i++)
//     {
//         cout << sumArray[i] << " ";
//     }
//     cout << "\n";

//     int finalArray[n],newValue;
//     for (int i = 0; i < n; i++)
//     {
//         finalArray[--sumArray[arr[i]]] = arr[i];
//         // newValue = --sumArray[arr[i]];
//         // finalArray[newValue] = arr[i];

//         for (int j = 0; j <= maxim; j++)
//         {
//             cout << "--> " << sumArray[j] << " ";
//         }
//         cout << "\n";
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << finalArray[i] << " ";
//     }
//     return 0;
// }
