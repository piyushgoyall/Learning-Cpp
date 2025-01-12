// https://leetcode.com/discuss/interview-question/3145446/Lambda-Function-In-C%2B%2B
// Recursive lambda function (Corrected code, non working code in the above article)

#include <bits/stdc++.h>
        using namespace std;

int main()
{
    // Recursive lambda using capturing itself
    auto factorial = [](auto &&self, int n) -> int
    {
        if (n <= 1)
        {
            return 1;
        }
        else
        {
            return n * self(self, n - 1);
        }
    };

    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    cout << "Factorial of " << num << " is: " << factorial(factorial, num) << endl;
    return 0;
}
