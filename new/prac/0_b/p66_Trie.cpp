// This program allows users to input words into the Trie and then provides suggestions based on a prefix.

#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    unordered_map<char, TrieNode *> children;
    bool isEndOfWord;

    TrieNode()
    {
        isEndOfWord = false;
    }
};

class Trie
{
private:
    TrieNode *root;

    void findSuggestions(TrieNode *current, string prefix, vector<string> &suggestions)
    {
        if (current->isEndOfWord)
        {
            suggestions.push_back(prefix);
        }
        for (auto &child : current->children)
        {
            findSuggestions(child.second, prefix + child.first, suggestions);
        }
    }

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
            }
            current = current->children[ch];
        }
        current->isEndOfWord = true;
    }

    vector<string> getSuggestions(const string &prefix)
    {
        TrieNode *current = root;
        for (char ch : prefix)
        {
            if (current->children.find(ch) == current->children.end())
            {
                return {};
            }
            current = current->children[ch];
        }
        vector<string> suggestions;
        findSuggestions(current, prefix, suggestions);
        return suggestions;
    }
};

int main()
{
    Trie trie;
    int n;
    cout << "Enter the number of words to insert: ";
    cin >> n;

    cout << "Enter the words:\n";
    for (int i = 0; i < n; ++i)
    {
        string word;
        cin >> word;
        trie.insert(word);
    }

    string prefix;
    cout << "Enter a prefix to get suggestions: ";
    cin >> prefix;

    vector<string> suggestions = trie.getSuggestions(prefix);
    if (suggestions.empty())
    {
        cout << "No suggestions found for the prefix \"" << prefix << "\".\n";
    }
    else
    {
        cout << "Suggestions:\n";
        for (const string &suggestion : suggestions)
        {
            cout << suggestion << "\n";
        }
    }

    return 0;
}
