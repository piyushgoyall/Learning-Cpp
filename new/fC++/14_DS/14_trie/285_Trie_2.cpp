// TRIES
// Maximum XOR of Two Numbers in an array.
// Array = [3, 10, 5, 15, 2]
// 3 xor 10 = 9            10 xor 15 = 5
// 3 xor 5 = 6             10 xor 2 = 8
// 3 xor 15 = 12           5 xor 15 = 10
// 3 xor 2 = 1             5 xor 2 = 7
// 10 xor 5 = 15           15 xor 2 = 13

// Brute Force
// Run two loops and check for each pair.
// int max_ans = 0;
// for(int i==0;i<n;i++)
// {
//     for(int j=i+1;j<n;j++)
//     {
//          max_ans = max(max_ans, a[i] xor a[j]);
//     }
// }

// To maximize XOR
// 0 xor 0 = 0          X = 0xBBBBBB
// 0 xor 1 = 1          To maximize XOR: We try to move in
// 1 xor 0 = 1          opposite direction, if possible
// 1 xor 1 = 0

#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    TrieNode *next[2];
    TrieNode()
    {
        next[0] = NULL;
        next[1] = NULL;
    }
};

TrieNode *buildtrie(vector<int> &a)
{
    TrieNode *root = new TrieNode();
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        TrieNode *cur = root;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (cur->next[bit] == NULL)
                cur->next[bit] = new TrieNode();
            cur = cur->next[bit];
        }
    }
    return root;
}

int helper(TrieNode *root, vector<int> &a)
{
    int res = 0;

    for (int i = 0; i < a.size(); i++)
    {
        int num = a[i];
        TrieNode *it = root;
        int cur_max = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = ((num >> i) & 1) ? 0 : 1;
            if (it->next[bit])
            {
                cur_max <<= 1;
                cur_max |= 1;
                it = it->next[bit];
            }
            else
            {
                cur_max <<= 1;
                cur_max |= 0;
                it = it->next[bit xor 1];
            }
        }
        res = max(res, cur_max);
    }

    return res;
}

int main()
{
    vector<int>
        a = {3, 10, 5, 15, 2};
    TrieNode *root = buildtrie(a);
    int ans = helper(root, a);
    cout << ans;
    return 0;
}