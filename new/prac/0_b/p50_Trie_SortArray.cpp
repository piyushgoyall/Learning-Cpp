#include <bits/stdc++.h>
using namespace std;

#define ALPHABET_SIZE 26

class TrieNode
{
public:
    TrieNode *children[ALPHABET_SIZE];
    bool isEndWord;

    TrieNode()
    {
        this->isEndWord = false;
        for (int i = 0; i < ALPHABET_SIZE; i++)
        {
            this->children[i] = NULL;
        }
    }

    void markAsLeaf()
    {
        this->isEndWord = true;
    }

    void unMarkAsLeaf()
    {
        this->isEndWord = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode();
    }

    TrieNode *getRoot()
    {
        return root;
    }

    int getIndex(char t)
    {
        return t - 'a';
    }

    void insertNode(string key)
    {
        if (key.empty())
            return;
        transform(key.begin(), key.end(), key.begin(), ::tolower);
        TrieNode *currentNode = root;
        int index = 0;
        for (int level = 0; level < key.length(); level++)
        {
            index = getIndex(key[level]);

            if (currentNode->children[index] == NULL)
            {
                currentNode->children[index] = new TrieNode();
            }
            currentNode = currentNode->children[index];
        }
        currentNode->markAsLeaf();
    }

    bool searchNode(string key)
    {
        if (key.empty())
            return false;
        transform(key.begin(), key.end(), key.begin(), ::tolower);
        TrieNode *currentNode = root;
        int index = 0;
        for (int level = 0; level < key.length(); level++)
        {
            index = getIndex(key[level]);

            if (currentNode->children[index] == NULL)
            {
                currentNode->children[index] = new TrieNode();
            }
            currentNode = currentNode->children[index];
        }
        if (currentNode != NULL and currentNode->isEndWord)
            return true;

        return false;
    }

    bool hasNoChildren(TrieNode *currentNode)
    {
        for (int i = 0; i < ALPHABET_SIZE; i++)
        {
            if ((currentNode->children[i]) != NULL)
                return false;
        }
        return true;
    }

    bool deleteHelper(string key, TrieNode *currentNode, int length, int level)
    {
        bool deletedSelf = false;

        if (currentNode == NULL)
        {
            cout << "Key does not exist\n";
            return deletedSelf;
        }
        if (level == length)
        {
            if (hasNoChildren(currentNode))
            {
                currentNode = NULL;
                deletedSelf = true;
            }
            else
            {
                currentNode->unMarkAsLeaf();
                deletedSelf = false;
            }
        }
        else
        {
            TrieNode *childNode = currentNode->children[getIndex(key[level])];
            bool childDeleted = deleteHelper(key, childNode, length, level + 1);
            if (childDeleted)
            {

                currentNode->children[getIndex(key[level])] = NULL;

                if (currentNode->isEndWord)
                {
                    deletedSelf = false;
                }
                else if (!hasNoChildren(currentNode))
                {
                    deletedSelf = false;
                }
                else
                {
                    currentNode = NULL;
                    deletedSelf = true;
                }
            }
            else
            {
                deletedSelf = false;
            }
        }
        return deletedSelf;
    }

    void deleteNode(string key)
    {
        if ((root == NULL) || (key.empty()))
        {
            return;
        }
        deleteHelper(key, root, key.length(), 0);
    }
};

// Recursive function to generate all words in alphabetical order
void GetWords(TrieNode *root, vector<string> &result, int level, string &word)
{
    // Leaf denotes end of a word
    if (root->isEndWord)
    {
        // Current word is stored till the 'level' in the character array
        result.push_back(word.substr(0, level));
    }
    for (int i = 0; i < 26; i++)
    {
        if (root->children[i] != nullptr)
        {
            // Non-null child, so add that index to the character array
            word[level] = i + 'a';
            GetWords(root->children[i], result, level + 1, word);
        }
    }
}

vector<string> SortArray(Trie *trie)
{
    vector<string> result;
    string word(20, '\0');
    GetWords(trie->getRoot(), result, 0, word);
    return result;
}

int main()
{
    vector<vector<string>> keys = {{"gram", "grammar", "grain", "grainy", "grape"},
                                   {"absent", "absorb", "abstain", "abstract", "absurd"},
                                   {"dormant", "dormitory", "dormouse", "dormant", "dormant"},
                                   {"prey", "preach", "prepare", "prestige", "prestigious"},
                                   {"moon", "moose", "mood", "moot", "moor"}};

    for (int i = 0; i < keys.size(); ++i)
    {
        cout << "Input: [";
        for (int j = 0; j < keys[i].size(); ++j)
        {
            cout << keys[i][j];
            if (j != keys[i].size() - 1)
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;

        Trie *t = new Trie();
        for (const string &word : keys[i])
        {
            cout << "Insert: '" << word << "'" << endl;
            t->insertNode(word);
        }

        vector<string> result = SortArray(t);
        cout << "\nOutput: [";
        for (int j = 0; j < result.size(); ++j)
        {
            cout << result[j];
            if (j != result.size() - 1)
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
        cout << string(100, '-') << endl;

        delete t;
    }
    return 0;
}