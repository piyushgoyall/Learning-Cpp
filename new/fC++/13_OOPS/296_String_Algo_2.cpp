// String Algorithms
// SubStr() Function
// Calculate the indices of the occurrences of strings s in t.

// Example: string s = "na";
//          string t = "apna collegena";

// Output:
// Found at index 2
// Found at index 12

// Substr function
// string substr(size_t pos = 0, size_t len = npos);
// Returns the string that starts at character position pos and spans len characters(or until the end of the string, whichever comes frist.)

// Time Complexity: O(ST)
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    string s = "na";
    string t = "apna collegena";
    int S = s.size(), T = t.size();
    for (int i = 0; i < T - S + 1; i++)
    {
        if (t.substr(i, S) == s)
        {
            cout << "Found at index: " << i << endl;
        }
    }
    return 0;
}