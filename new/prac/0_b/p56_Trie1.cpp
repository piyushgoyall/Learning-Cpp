#include <iostream>
#include <vector>
#include <algorithm> // Include this for all_of

using namespace std;

class TrieNode
{
public:
    vector<TrieNode *> children;
    bool isEndOfWord;

    TrieNode()
    {
        children = vector<TrieNode *>(26, nullptr);
        isEndOfWord = false;
    }
};

class Trie
{
private:
    TrieNode *root;

    bool deleteHelper(TrieNode *current, const string &word, int index)
    {
        if (index == word.length())
        {
            if (!current->isEndOfWord)
                return false;
            current->isEndOfWord = false;
            return all_of(current->children.begin(), current->children.end(), [](TrieNode *child)
                          { return child == nullptr; });
        }

        int charIndex = word[index] - 'a';
        if (current->children[charIndex] == nullptr)
            return false;

        bool shouldDeleteChild = deleteHelper(current->children[charIndex], word, index + 1);

        if (shouldDeleteChild)
        {
            delete current->children[charIndex];
            current->children[charIndex] = nullptr;
            return !current->isEndOfWord && all_of(current->children.begin(), current->children.end(), [](TrieNode *child)
                                                   { return child == nullptr; });
        }
        return false;
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
            int charIndex = ch - 'a';
            if (current->children[charIndex] == nullptr)
            {
                current->children[charIndex] = new TrieNode();
            }
            current = current->children[charIndex];
        }
        current->isEndOfWord = true;
    }

    bool search(const string &word)
    {
        TrieNode *current = root;
        for (char ch : word)
        {
            int charIndex = ch - 'a';
            if (current->children[charIndex] == nullptr)
                return false;
            current = current->children[charIndex];
        }
        return current->isEndOfWord;
    }

    void remove(const string &word)
    {
        deleteHelper(root, word, 0);
    }
};

int main()
{
    Trie trie;

    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");

    cout << "Search 'app': " << (trie.search("app") ? "Found" : "Not Found") << endl;
    cout << "Search 'apple': " << (trie.search("apple") ? "Found" : "Not Found") << endl;
    cout << "Search 'bat': " << (trie.search("bat") ? "Found" : "Not Found") << endl;

    trie.remove("app");
    cout << "Search 'app' after deletion: " << (trie.search("app") ? "Found" : "Not Found") << endl;
    cout << "Search 'apple' after deletion: " << (trie.search("apple") ? "Found" : "Not Found") << endl;

    return 0;
}
