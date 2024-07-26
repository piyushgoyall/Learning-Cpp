// Sort based on the second value

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// bool compare(pair<int, int> p1, pair<int, int> p2)
// {
//     return p1.second > p2.second;
// }

void countOccurrences(const vector<int> &nums)
{
    map<int, int> counts;

    // Count occurrences of each integer
    for (int num : nums)
    {
        counts[num]++;
    }

    // Copy the map to a vector of pairs
    vector<pair<int, int>> countVector(counts.begin(), counts.end());

    // Sort the vector by values
    sort(countVector.begin(), countVector.end(), compare);

    // Sort the vector by values
    sort(countVector.begin(), countVector.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
             return a.second > b.second; // Sort by values in descending order
         });

    // Print the sorted occurrences
    for (const auto &pair : countVector)
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
