#include <bits/stdc++.h>
using namespace std;

// HOLD
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
}

int main()
{
    // declare
    int number[15];

    // accessing an array
    cout << "Value at zero index: " << number[0] << endl;
    cout << "Value at fourteen index: " << number[14] << endl;

    // cout << "Value at 20 index: " << number[20] << endl;

    // initialising an array
    int second[3] = {5, 7, 11};

    // accessing an element
    cout << "Value at 2 index: " << second[2] << endl;

    int third[15] = {2, 7};
    // printArray(third, 15);

    int thirdSize = sizeof(third) / sizeof(int);
    cout << "Size of third is: " << thirdSize << endl;

    // cout << "Printing the array: " << endl;
    // // print the array
    // for (int i = 0; i < 15; i++)
    // {
    //     cout << third[i] << " ";
    // }

    cout << endl;
    int fourth[10] = {0};
    // printArray(fourth, 10);

    // cout << "Printing the array: " << endl;
    // // print the array
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << fourth[i] << " ";
    // }

    cout << endl;
    int fifth[10] = {1};
    // printArray(fifth, 10);

    // cout << "Printing the array: " << endl;
    // // print the array
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << fifth[i] << " ";
    // }

    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << "Size of fifth is: " << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[3] << endl;

    cout << "Printing the array: " << endl;
    // printing the array
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;
    cout << "Printing Done" << endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    cout << endl;
    cout << "All ok" << endl;
    return 0;
}