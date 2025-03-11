#include <iostream>
using namespace std;

void generateSequence(int n, int term, int prevDiff, int count, int &peak)
{
    if (count == n / 2 - 1)
    {
        peak = term + prevDiff;
        cout << peak << " ";
        return;
    }

    int newTerm = term + prevDiff;
    cout << newTerm << " ";

    generateSequence(n, newTerm, prevDiff + 4, count + 1, peak);
}

void generateReverse(int n, int term, int prevDiff, int count, int peak)
{
    if (count == n / 2 - 1)
    {
        cout << peak << " ";
        return;
    }

    int newTerm = term + prevDiff;
    generateReverse(n, newTerm, prevDiff + 4, count + 1, peak);

    cout << newTerm << " ";
}

void generatePattern(int n)
{
    if (n < 2 || n % 2 != 0)
    {
        cout << "Please enter an even number greater than or equal to 2." << endl;
        return;
    }

    cout << "3 5 ";
    int peak = 0;

    generateSequence(n-3, 5, 6, 0, peak);
    generateReverse(n-3, 5, 6, 0, peak);
    cout << "5 3";
}

int main()
{
    int n;
    cout << "Enter an even number: ";
    cin >> n;
    generatePattern(n);
    return 0;
}
