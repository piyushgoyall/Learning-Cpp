#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int choosePivot(int left, int right)
{
    int i1 = left + (rand() % (right - left + 1));
    int i2 = left + (rand() % (right - left + 1));
    int i3 = left + (rand() % (right - left + 1));

    return max(min(i1, i2), min(max(i1, i2), i3));
}

int partition(string &arr, int left, int right)
{
    int pivotInd = choosePivot(left, right);
    swap(arr[right], arr[pivotInd]);
    int pivot = arr[right];
    int i = (left - 1);

    for (int j = left; j <= right - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return (i + 1);
}

void quickSort(string &arr, int left, int right)
{
    if (left < right)
    {
        int pi = partition(arr, left, right);

        quickSort(arr, left, pi - 1);
        quickSort(arr, pi + 1, right);
    }
}

vector<string> groupAnagrams(string strArray[], int arrSize)
{
    string dup[arrSize];
    vector<string> output;
    for (int i = 0; i < arrSize; i++)
        dup[i] = strArray[i];

    for (int i = 0; i < arrSize; i++)
        quickSort(dup[i], 0, dup[i].length() - 1);

    unordered_map<string, vector<int>> map;
    for (int i = 0; i < arrSize; i++)
        map[dup[i]].push_back(i);

    for (auto itr : map)
    {
        for (int index : itr.second)
        {
            output.push_back(strArray[index]);
        }
    }
    return output;
}

// Group anagrams together from given list of words
int main()
{
    string arr[] = {
        "tom marvolo riddle ",
        "abc",
        "def",
        "cab",
        "fed",
        "clint eastwood ",
        "i am lord voldemort",
        "elvis",
        "old west action",
        "lives"};
    int arrSize = 10;
    vector<string> vec;
    vec = groupAnagrams(arr, arrSize);
    for (std::vector<string>::const_iterator i = vec.begin(); i != vec.end(); ++i)
        std::cout << *i << ' ';
}