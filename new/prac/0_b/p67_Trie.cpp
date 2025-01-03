// Finding the Longest Common Prefix(LCP) among a set of words.

#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    unordered_map<char, TrieNode *> children;
    int childCount;
    bool isEndOfWord;

    TrieNode()
    {
        childCount = 0;
        isEndOfWord = false;
    }
};

class Trie
{
private:
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(const string &word)
    {
        TrieNode *current = root;
        for (char ch : word)
        {
            if (current->children.find(ch) == current->children.end())
            {
                current->children[ch] = new TrieNode();
                current->childCount++;
            }
            current = current->children[ch];
        }
        current->isEndOfWord = true;
    }

    string findLongestCommonPrefix()
    {
        string prefix = "";
        TrieNode *current = root;

        while (current && current->childCount == 1 && !current->isEndOfWord)
        {
            auto it = current->children.begin();
            prefix += it->first;
            current = it->second;
        }

        return prefix;
    }
};

int main()
{
    Trie trie;
    int n;
    cout << "Enter the number of words: ";
    cin >> n;

    cout << "Enter the words:\n";
    for (int i = 0; i < n; ++i)
    {
        string word;
        cin >> word;
        trie.insert(word);
    }

    string lcp = trie.findLongestCommonPrefix();
    if (lcp.empty())
    {
        cout << "No common prefix among the words.\n";
    }
    else
    {
        cout << "Longest common prefix: " << lcp << "\n";
    }

    return 0;
}
