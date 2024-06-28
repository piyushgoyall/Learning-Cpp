#include <iostream>
#include <cassert>

using namespace std;

int divide(int numerator, int denominator)
{
    assert(denominator != 0); // Ensure that the denominator is not zero
    return numerator / denominator;
}

int main()
{
    int a = 10;
    int b = 2;
    int c = 0;

    cout << "Result of " << a << " / " << b << " = " << divide(a, b) << endl;

    // This will cause the program to terminate with an assertion failure
    cout << "Result of " << a << " / " << c << " = " << divide(a, c) << endl;

    return 0;
}
