#include <iostream>
#include <unordered_map>

using namespace std;

// Typedef for short declaration
typedef unordered_multimap<string, int>::iterator umm_iterator;

// Utility function to print unordered_multimap
void printUmm(const unordered_multimap<string, int> &umm)
{
    for (const auto &pair : umm)
    {
        cout << "<" << pair.first << ", " << pair.second << "> ";
    }
    cout << endl;
}

int main()
{
    // Empty initialization
    unordered_multimap<string, int> umm1;

    // Initialization by initializer list
    unordered_multimap<string, int> umm2(
        {{"apple", 1}, {"ball", 2}, {"apple", 10}, {"cat", 7}, {"dog", 9}, {"cat", 6}, {"apple", 1}});

    // Initialization by assignment operation
    umm1 = umm2;
    printUmm(umm1);

    // Check if the unordered_multimap is empty
    if (umm2.empty())
    {
        cout << "unordered multimap 2 is empty\n";
    }
    else
    {
        cout << "unordered multimap 2 is not empty\n";
    }

    // Print the size of the unordered_multimap
    cout << "Size of unordered multimap 1 is " << umm1.size() << endl;

    // Find and return any pair associated with a key
    string key = "apple";
    umm_iterator it = umm1.find(key);
    if (it != umm1.end())
    {
        cout << "\nkey " << key << " is there in unordered multimap 1\n";
        cout << "One of the values associated with " << key << " is " << it->second << endl;
    }
    else
    {
        cout << "\nkey " << key << " is not there in unordered multimap 1\n";
    }

    // Count returns the count of total number of pairs associated with a key
    int cnt = umm1.count(key);
    cout << "\nTotal values associated with " << key << " are " << cnt << "\n\n";

    printUmm(umm2);

    // Insert by making pair explicitly
    umm2.insert(make_pair("dog", 11));

    // Insert by initializer list
    umm2.insert({{"alpha", 12}, {"beta", 33}});
    cout << "\nAfter insertion of <alpha, 12> and <beta, 33>\n";
    printUmm(umm2);

    // Erase deletes all pairs corresponding to a key
    umm2.erase("apple");
    cout << "\nAfter deletion of 'apple'\n";
    printUmm(umm2);

    // Clear deletes all pairs from the container
    umm1.clear();
    umm2.clear();

    if (umm2.empty())
    {
        cout << "\nunordered multimap 2 is empty\n";
    }
    else
    {
        cout << "\nunordered multimap 2 is not empty\n";
    }

    // Demonstrate bucket-related functions
    unordered_multimap<string, int> umm3 = {{"a", 1}, {"b", 2}, {"c", 3}, {"d", 4}, {"e", 5}};
    cout << "\nNumber of buckets in umm3: " << umm3.bucket_count() << endl;
    cout << "Elements in bucket 0: ";
    for (auto it = umm3.begin(0); it != umm3.end(0); ++it)
    {
        cout << "<" << it->first << ", " << it->second << "> ";
    }
    cout << endl;

    // Check the maximum load factor
    cout << "Maximum load factor of umm3: " << umm3.max_load_factor() << endl;

    return 0;
}
