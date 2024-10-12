#include <bits/stdc++.h>
using namespace std;

int modifiedBinarySearch(string arr[], int low, int high, string target)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == "")
    {
        int i = mid - 1;
        int j = mid + 1;

        while (true)
        {
            if (i < low && j > high)
            {
                return -1;
            }

            if (i >= low && arr[i] != "")
            {
                mid = i;
                break;
            }
            else if (j <= high && arr[j] != "")
            {
                mid = j;
                break;
            }

            i--;
            j++;
        }
    }

    // Now perform simple Binary Search
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return modifiedBinarySearch(arr, low, mid - 1, target);
    else
        return modifiedBinarySearch(arr, mid + 1, high, target);
}

int searchForString(string array[], int size, string target)
{
    return modifiedBinarySearch(array, 0, size - 1, target);
}

int main()
{
    int size = 12;
    string array[size] = {"", "educative", "", "",
                          "", "hello", "", "learning",
                          "world", "", "", ""};

    string targetArray[2] = {"educative", "learning"};

    for (int i = 0; i < 2; i++)
    {
        cout << targetArray[i] << ": " << searchForString(array, size, targetArray[i]) << endl;
    }
    return 0;
}