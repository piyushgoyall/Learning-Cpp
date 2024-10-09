#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int minimum(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

double getMedian(int array1[], int array2[], int sizeOfArray1, int sizeOfArray2)
{
    // To obtain the desired optimization we need to keep the larger array first

    int *a; // pointer to the larger array
    int *b;
    int n; // size of the larger array
    int m;

    // Setting the arrays in correct order A--> larger array, B--> smaller array
    if (sizeOfArray1 > sizeOfArray2)
    {
        a = array1;
        b = array2;

        n = sizeOfArray1;
        m = sizeOfArray2;
    }
    else
    {
        a = array2;
        b = array1;

        n = sizeOfArray2;
        m = sizeOfArray1;
    }

    // The main algorithm
    int arraySize = sizeOfArray1 + sizeOfArray2;
    int arraySizeMid = arraySize / 2;

    int i = 0;
    int j = 0;
    int median = -1;

    int startIndex = 0;
    int endIndex = n;

    while (startIndex <= endIndex)
    {

        i = (startIndex + endIndex) / 2;
        j = ((arraySize + 1) / 2) - i;

        if (i < n && j > 0 && b[j - 1] > a[i])
            startIndex = i + 1;

        else if (i > 0 && j < m && b[j] < a[i - 1])
            endIndex = i - 1;

        else
        {
            if (i == 0)
                median = b[j - 1];
            else if (j == 0)
                median = a[i - 1];
            else
                median = maximum(a[i - 1], b[j - 1]);
            break;
        }
    }

    if (arraySize % 2 == 1) // if total array size is odd
        return (double)median;

    if (i == n) // if total array size is even and second half of array a is empty
        return (median + b[j]) / 2.0;

    if (j == m) // if total array size is even and second half of array b is empty
        return (median + a[i]) / 2.0;

    return (median + minimum(a[i], b[j])) / 2.0;
}

int main()
{
    int array1[] = {900};
    int array2[] = {1, 5, 8, 10, 20};

    int sizeArray1 = sizeof(array1) / sizeof(array1[0]);
    int sizeArray2 = sizeof(array2) / sizeof(array2[0]);

    cout << "The median of the two arrays is: "
         << getMedian(array1, array2, sizeArray1, sizeArray2);

    cout << endl
         << endl;
    // Example 2
    int array3[] = {900};
    int array4[] = {5, 8, 10, 20};

    int sizeArray3 = sizeof(array3) / sizeof(array3[0]);
    int sizeArray4 = sizeof(array4) / sizeof(array4[0]);

    cout << "The median of the two arrays is: "
         << getMedian(array3, array4, sizeArray3, sizeArray4);

    return 0;
}