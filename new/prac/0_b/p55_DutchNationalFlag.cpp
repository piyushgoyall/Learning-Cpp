// Sort 0, 1 and 2.

#include <iostream>
using namespace std;

void mySwap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int *DutchNationalFlag(int *arr, int size)
{
    int i = 0;
    int mid = 0;
    int j = size - 1;

    while (mid <= j)
    {
        if (arr[mid] == 0)
        {
            mySwap(arr, i++, mid++);
        }
        else if (arr[mid] == 2)
        {
            mySwap(arr, mid, j--);
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
    }
    return arr;
}

int main()
{
    int size = 6;
    int arr[size] = {2, 0, 0, 1, 2, 1};
    int *sortedArray = DutchNationalFlag(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << sortedArray[i] << " ";
    }
    return 0;
}