// Find The Peak Element
// For a given array, find the peak element in the array. Peak element is one which is greater than both, left and right neighbours of itself.
// CORNER CASES: Ascending array : last element is peak
//               Descending array : first element is peak
//               For all same elements : each element is peak
// Strategy : Use binary search, analyze indices from 0 to n-1.
//            Compute mid & for each mid check if arr[mid] is a peak element
//            Else if arr[mid-1] > arr[mid] check left for peak
//            Else if arr[mid] < arr[mid+1] check right for peak

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(int arr[], int low, int high, int n)
{
    int mid = low + (high - low) / 2;
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
    {
        return mid;
    }
    else if (mid > 0 && arr[mid - 1] > arr[mid])
    {
        return findPeakElement(arr, low, mid - 1, n);
    }
    else
    {
        return findPeakElement(arr, mid + 1, high, n);
    }
}

int main()
{
    int arr[] = {0, 6, 8, 5, 7, 9};
    int n = 6;
    cout << "Peak element index : " << findPeakElement(arr, 0, n - 1, n) << endl;
    return 0;
}
