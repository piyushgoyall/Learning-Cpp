#include <iostream>
using namespace std;

// Recursive function to sort the array using insertion sort
void insertionSortRecursive(int arr[], int n)
{
    // Base case: If the array has 1 or 0 elements, it is already sorted
    if (n <= 1)
        return;

    // Sort the first n-1 elements
    insertionSortRecursive(arr, n - 1);

    // Insert the nth element into the sorted array
    int last = arr[n - 1];
    int j = n - 2;

    // Move elements of arr[0..n-2], that are greater than last,
    // to one position ahead of their current position
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSortRecursive(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Remember to deallocate the dynamic array
    return 0;
}
