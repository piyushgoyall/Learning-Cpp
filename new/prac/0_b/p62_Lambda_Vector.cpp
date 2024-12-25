#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3, 1, 4, 1, 5, 9};
    int threshold = 4;

    // 1. Finding the first element greater than a threshold
    auto it = find_if(nums.begin(), nums.end(), [threshold](int x)
                      { return x > threshold; });
    if (it != nums.end())
    {
        cout << "First element greater than " << threshold << ": " << *it << endl;
    }
    else
    {
        cout << "No element greater than " << threshold << " found." << endl;
    }

    // 2. Doubling each element in the vector
    transform(nums.begin(), nums.end(), nums.begin(), [](int x)
              { return x * 2; });
    cout << "After doubling each element: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    // 3. Filtering elements greater than a threshold
    vector<int> filtered;
    copy_if(nums.begin(), nums.end(), back_inserter(filtered), [threshold](int x)
            { return x > threshold; });
    cout << "Filtered elements greater than " << threshold << ": ";
    for (int num : filtered)
        cout << num << " ";
    cout << endl;

    // 4. Counting elements greater than a threshold
    auto count = count_if(nums.begin(), nums.end(), [threshold](int x)
                          { return x > threshold; });
    cout << "Count of elements greater than " << threshold << ": " << count << endl;

    return 0;
}
