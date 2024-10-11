#include <iostream>
using namespace std;

int insertPosition(int arr[], int arrSize, int s)
{
    if (arrSize < 1)
        return -1;

    int start = 0;
    int end = arrSize - 1;
    int mid;
    int pos;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == s)
            return mid;
        else if (arr[mid] > s)
        {
            end = mid - 1;
            pos = mid;
        }
        else
        {
            start = mid + 1;
            pos = mid + 1;
        }
    }
    return pos;
}

int main()
{
    int arr[] = {1, 3, 5, 6};
    int s = 5;
    int arrSize = 4;
    cout << insertPosition(arr, arrSize, s) << endl;
    s = 2;
    cout << insertPosition(arr, arrSize, s) << endl;
}