// String Algorithms
// String Hashing
// String Hash -> Hash Function -> String -> Unique Hash

// Let's look at some existing representation
// "101011" = 1*2^5 + 0*2^4 + 1*2^3 + 0*2^2 + 1*2^1 + 1*2^0
// "945" = 9*10^2 + 4*10^1 + 5*10^0

// String hash
// a -> 1,
// b -> 2,
// .
// .
// z -> 26
// "apna" = 1*31^3 + 16*31^2 + 14*31^1 + 1*31^0 OR
// "apna" = 1*31^0 + 16*31^1 + 14*31^2 + 1*31^3
//
// Q) "ap" = 1*31^0 + 16*31^1
// "apna" = 1*31^0 + 16*31^1 + 14*31^2 + 1*31^3
// Calculate hash("na") from hash("apna") and hash("ap")

// ANS) hash("na") = (1/31^2)*("apna" - "ap")
//                 = (1/31^2)*((1*31^0 + 16*31^1 + 14*31^2 + 1*31^3) - (1*31^0 + 16*31^1))
//                 = (1/31^2)*(14*31^2 + 1*31^3)
//                 = 14*31^0 + 1*31^1

// But this grows exponentially !!!
// To combat this problem, we will use modulo operations.
// Commonly used mod = 1e9 + 7 (1000000007)

// QUES) Find number of unique strings
// Brute Force

// #include <bits/stdc++.h>
// using namespace std;
// int32_t main()
// {
//     vector<string> strings = {"aa", "ab", "aa", "b", "cc", "aa"};
//     sort(strings.begin(), strings.end());

//     // Time Complexity: O(nmlog(n)) where nlog(n) is time for sorting and m is time for string comparisions

//     int distinct = 0;
//     for (int i = 0; i < strings.size(); i++)
//     {
//         if (i == 0 or strings[i] != strings[i - 1])
//         {
//             distinct++;
//         }
//     }
//     cout << distinct << "\n";
// }

// Can hashing reduce the time complexity
// String comparision takes O(m) time
// Time taken to compare hashes will be O(1)

#include <bits/stdc++.h>
using namespace std;

int p = 31;
const int N = 1e5 + 3, m = 1e9 + 7;
vector<long long> powers(N);

long long calculate_hash(string s)
{
    long long hash = 0;
    for (int i = 0; i < s.size(); i++)
    {
        hash = (hash + s[i] - 'a' + 1) * powers[i] % m;
    }
    return hash;
}

int32_t main()
{
    powers[0] = 1;
    for (int i = 1; i < N; i++)
    {
        powers[i] = (powers[i - 1] * p) % m;
    }
    vector<string> strings = {"aa", "ab", "aa", "b", "cc", "aa"};
    vector<long long> hashes;
    for (auto w : strings)
    {
        hashes.push_back(calculate_hash(w));
    }

    // Time Complexity: O(nm)
    sort(hashes.begin(), hashes.end());
    // Time Complexity: O(n log n)

    // FINAL Time Complexity: O(nm + nlog(n))

    int distinct = 0;
    for (int i = 0; i < hashes.size(); i++)
    {
        if (i == 0 or hashes[i] != hashes[i - 1])
            distinct++;
    }
    cout << distinct << "\n";
}