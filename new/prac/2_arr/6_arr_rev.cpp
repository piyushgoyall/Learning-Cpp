#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array: " << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing Done" << endl;
    cout << endl;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int size)
{
    for (int i = 0; i < (size / 2); i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
}

void rev(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    reverse(arr, 10);
    printArray(arr, 10);

    int brr[6] = {1, 4, 0, 5, -2, 15};
    rev(brr, 6);
    printArray(brr, 6);

    int crr[5] = {2, 6, 3, 9, 4};
    rev(crr, 5);
    printArray(crr, 5);
    return 0;
}