#include <iostream>
using namespace std;

int searchRotatedArray(int arr[], int left, int right, int s)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == s) // Element found
            return mid;

        // If left to mid is sorted
        if (arr[left] < arr[mid])
        {
            if (s >= arr[left] && s < arr[mid]) // Target is in the left half
                right = mid - 1;
            else // Target is in the right half
                left = mid + 1;
        }
        // If mid to right is sorted
        else if (arr[mid] < arr[right])
        {
            if (s > arr[mid] && s <= arr[right]) // Target is in the right half
                left = mid + 1;
            else // Target is in the left half
                right = mid - 1;
        }
        // Handling duplicates (arr[left] == arr[mid])
        else
        {
            // Skip duplicates
            if (arr[left] == arr[mid])
                left++;
            if (arr[right] == arr[mid])
                right--;
        }
    }
    return -1; // Element not found
}

int main()
{
    int arr[] = {40, 100, -100, -40, 0, 24, 40};
    cout << searchRotatedArray(arr, 0, 6, 40) << endl;
}