#include <iostream>
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
private:
    TrieNode *root;

public:
    Trie();
    int getIndex(char t);
    void insertNode(string key);
    bool searchNode(string key);
    bool deleteNode(string key);
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
void Trie::insertNode(string key) {}

// Function to search given key in Trie
bool Trie::searchNode(string key)
{
    return false;
}

// Function to delete given key from Trie
bool Trie::deleteNode(string key)
{
    return false;
}

int main()
{
    Trie *t = new Trie();
    cout << "Index to insert a = " << t->getIndex('a') << endl;
    cout << "Index to insert t = " << t->getIndex('t') << endl;

    return 0;
}