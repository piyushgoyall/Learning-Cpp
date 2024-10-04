#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findSum(int arr[], int arrSize, int s)
{
    unordered_set<int> US;
    vector<int> elements;
    for (int i = 0; i < arrSize; i++)
    {
        int temp = s - arr[i];
        if (US.find(temp) != US.end())
        {
            elements.push_back(arr[i]);
            elements.push_back(temp);
        }
        US.insert(arr[i]);
    }
    return elements;
}

int main()
{
    int arr[] = {8, 4, 1, 6, 5, 9};
    int sum = 14;
    vector<int> result = findSum(arr, 6, sum);
    if (!result.empty())
        cout << "Sum of " << sum << " found: " << result[0] << " " << result[1];
    else
        cout << "Results not found" << endl;
}