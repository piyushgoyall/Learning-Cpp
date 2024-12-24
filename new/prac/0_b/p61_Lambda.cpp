#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Simple Lambda Function
    auto add = [](int a, int b) -> int
    {
        return a + b;
    };

    cout << "Sum: " << add(5, 3) << endl;

    // 2. Capturing Variables

    int x = 10, y = 20;

    auto multiply = [x, y]()
    {
        return x * y;
    };

    cout << "Product: " << multiply() << endl;

    // 3. Capturing by Reference

    int counter = 0;
    auto increment = [&counter]()
    {
        counter++;
    };

    increment();
    increment();
    cout << "Counter: " << counter << endl;

    // 4. Lambda in sort

    vector<int> nums = {5, 2, 8, 1, 3};
    sort(nums.begin(), nums.end(), [](int a, int b)
         {
             return a > b; // Sort in descending order
         });

    cout << "Sorted: ";

    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    // 5. Returning a Lambda Function

    auto createMultiplier = [](int factor)
    {
        return [factor](int value)
        {
            return value * factor;
        };
    };

    auto multiplyBy3 = createMultiplier(3);
    cout << "6 multiplied by 3: " << multiplyBy3(6) << endl;

    return 0;
}
