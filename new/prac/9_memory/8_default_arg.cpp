// DEFAULT ARGUMENTS (Starts from rightmost parameter/argument)
// Like you can not write void print(int *arr, int n = 0, int start)

#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 4, 7, 8, 9};
    int size = 5;

    // print(arr, size, 0); // SUPPOSE I DONT WANT TO PASS THE START VALUE FOR SOME CASE. TO DO THIS WRITE start = 0 IN LINE 6

    print(arr, size);
    print(arr, size, 2);

    return 0;
}