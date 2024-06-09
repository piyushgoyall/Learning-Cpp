// Count occurrence of each character.

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void countOccurrences(const vector<int> &nums)
{
    unordered_map<int, int> counts;

    // Count occurrences of each integer
    for (int num : nums)
    {
        counts[num]++;
    }

    // Print the occurrences
    for (const auto &pair : counts)
    {
        cout << pair.first << " occurs " << pair.second << " times." << endl;
    }
}

int main()
{
    vector<int> nums = {4, 5, 0, -2, -3, 1, 4, 5, 5, -2};
    countOccurrences(nums);
    return 0;
}
