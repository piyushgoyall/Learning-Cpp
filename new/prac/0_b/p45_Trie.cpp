#include <bits/stdc++.h>
using namespace std;

#define ALPHABET_SIZE 26

class TrieNode
{
public:
    TrieNode *children[ALPHABET_SIZE];
    bool isEndWord;

    TrieNode();
    void markAsLeaf();
    void unMarkAsLeaf();
};

class Trie
{
public:
    TrieNode *root;

    Trie();
    int getIndex(char t);
    void insertNode(string key);
    bool searchNode(string key);
    void deleteNode(string key);
    bool hasNoChildren(TrieNode *currentNode);
    bool deleteHelper(string key, TrieNode *currentNode, int length, int level);
};

TrieNode::TrieNode()
{
    this->isEndWord = false;
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        this->children[i] = NULL;
    }
}

// Function to mark the currentNode as Leaf
void TrieNode::markAsLeaf()
{
    this->isEndWord = true;
}

// Function to unMark the currentNode as Leaf
void TrieNode::unMarkAsLeaf()
{
    this->isEndWord = false;
}

Trie::Trie()
{
    root = new TrieNode();
}

// Function to get the index of a character 't'
int Trie::getIndex(char t)
{
    return t - 'a';
}

// Function to insert a key,value pair in the Trie
void Trie::insertNode(string key)
{
    // Empty string is not allowed
    if (key.empty())
        return;

    // using transform() function and ::tolower in STL to convert 'key' to lowercase
    transform(key.begin(), key.end(), key.begin(), ::tolower);
    TrieNode *currentNode = root;
    int index = 0;

    // Iterate the trie with the given character index,
    // If the index points to NULL
    // simply create a TrieNode and go down a level
    for (int level = 0; level < key.length(); level++)
    {
        index = getIndex(key[level]);

        if (currentNode->children[index] == NULL)
        {
            currentNode->children[index] = new TrieNode();
            cout << key[level] << " inserted" << endl;
        }
        currentNode = currentNode->children[index];
    }

    // Mark the end character as leaf node
    currentNode->markAsLeaf();
    cout << "'" << key << "' inserted" << endl;
}

// Function to search given key in Trie
bool Trie::searchNode(string key)
{
    if (key.empty())
        return false;

    // using transform() function and ::tolower in STL to convert 'key' to lowercase
    transform(key.begin(), key.end(), key.begin(), ::tolower);
    TrieNode *currentNode = root;
    int index = 0;

    // Iterate the Trie with given character index,
    // If it is NULL at any point then we stop and return false
    // We will return true only if we reach leafNode and have traversed the
    // Trie based on the length of the key
    for (int level = 0; level < key.length(); level++)
    {
        index = getIndex(key[level]);

        if (currentNode->children[index] == NULL)
            return false;
        currentNode = currentNode->children[index];
    }
    if (currentNode != NULL and currentNode->isEndWord)
        return true;

    return false;
}

// Helper Function to return true if currentNode does not have any children
bool Trie::hasNoChildren(TrieNode *currentNode)
{
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if ((currentNode->children[i]) != NULL)
            return false;
    }
    return true;
}
// Recursive function to delete given key
bool Trie::deleteHelper(string key, TrieNode *currentNode, int length, int level)
{
    bool deletedSelf = false;

    if (currentNode == NULL)
    {
        cout << "Key does not exist\n";
        return deletedSelf;
    }

    // Base Case: If we have reached at the node which points to the alphabet at the end of the key.
    if (level == length)
    {
        // If there are no nodes ahead of this node in this path
        // Then we can delete this node
        if (hasNoChildren(currentNode))
        {
            delete currentNode; // free the memory
            currentNode = NULL; // clear the pointer by pointing it to NULL
            deletedSelf = true;
        }
        // If there are nodes ahead of currentNode in this path
        // Then we cannot delete currentNode. We simply unmark this as leaf
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
            // Making children pointer also null: since child is deleted
            currentNode->children[getIndex(key[level])] = NULL;
            // If currentNode is leaf node that means currntNode is part of another key
            // and hence we can not delete this node and it's parent path nodes
            if (currentNode->isEndWord)
            {
                deletedSelf = false;
            }
            // If childNode is deleted but if currentNode has more children then currentNode must be part of another key.
            // So, we cannot delete currenNode
            else if (!hasNoChildren(currentNode))
            {
                deletedSelf = false;
            }
            // Else we can delete currentNode
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

// Function to delete given key from Trie
void Trie::deleteNode(string key)
{
    if ((root == NULL) || (key.empty()))
    {
        cout << "Null key or Empty trie error\n";
        return;
    }
    deleteHelper(key, root, key.length(), 0);
}

int main()
{
    string keys[9] = {"the", "a", "there", "answer", "any", "by", "bye", "their", "abc"};

    string output[2] = {"Not present in the trie", "Present in the trie"};

    Trie *t = new Trie();

    cout << "Keys to insert:\n";
    for (int i = 0; i < 9; i++)
    {
        cout << keys[i] << ", ";
    }
    cout << endl;

    // Construct trie
    for (int i = 0; i < 9; i++)
    {
        t->insertNode(keys[i]);
    }

    // Search for different keys
    if (t->searchNode("the") == true)
        cout << "the --- " << output[1] << endl;
    else
        cout << "the --- " << output[0] << endl;
    if (t->searchNode("these") == true)
        cout << "these --- " << output[1] << endl;
    else
        cout << "these --- " << output[0] << endl;
    if (t->searchNode("abc") == true)
        cout << "abc --- " << output[1] << endl;
    else
        cout << "abc --- " << output[0] << endl;

    t->deleteNode("abc");
    cout << "Deleted key \"abc\"" << endl;
    if (t->searchNode("abc") == true)
        cout << "abc --- " << output[1] << endl;
    else
        cout << "abc --- " << output[0] << endl;

    return 0;
}