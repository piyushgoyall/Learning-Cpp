// Digital Dictionary
// Problem Statement: Neha has a digital dictionary. It has an input field in which one can search and
// the dictionary displays all the words whose prefix is that input string in lexicographical order.
// Now you are given a task to make your own digital dictionary. You will be given words that can store in your database
// and then you can store in your database and then you need to design the search functionality.
// And if no such words are available for a given search word, add this word to your dictionary.

// Input Format: Single integer N which denotes the number of words which are to be stored in the databaseof the dictionary.
// N lines of input, where in each line there is a string made up of lowercae letter.
// Single integer Q which denotes the number of queries.
// Q number of lines describing the query string on each line given by user.

// Sample Test Case
// Sample Input:                Sample Output:
// 4                            pet
// pet                          peter
// peter                        pet
// rat                          peter
// rack                         rack
// 5                            rat
// pe                           rack
// pet                          rat
// r
// rac
// rat

// IDEA
// We will create a Trie data structure and store all the words that are in the dictionary. Now, in queries,
// we need to just check the words which have the prefix same as given in input. And then we need to use DFS for getting all the possible of words.

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *next[26];
    bool end;
    node()
    {
        for (int i = 0; i < 26; i++)
        {
            next[i] = NULL;
        }
        end = false;
    }
};

class Trie
{
private:
    node *root;

public:
    Trie()
    {
        root = new node();
    }
    void insert(string &s)
    {
        node *it = root;
        for (auto c : s)
        {
            if (!it->next[c - 'a'])
                it->next[c - 'a'] = new node();
            it = it->next[c - 'a'];
        }
        it->end = true;
    }
    void find(string &s)
    {
        node *it = root;
        for (auto c : s)
        {
            if (!it->next[c - 'a'])
            {
                cout << "No Suggestions\n";
                insert(s);
                return;
            }
            it = it->next[c - 'a'];
        }
        vector<string> res;
        printall(it, s, res, "");
        for (auto c : res)
        {
            cout << s << c << "\n";
        }
    }
    void printall(node *it, string &s, vector<string> &res, string cur)
    {
        if (it == NULL)
            return;
        if (it->end)
        {
            res.push_back(cur);
        }
        for (int i = 0; i < 26; i++)
        {
            if (it->next[i])
            {
                printall(it->next[i], s, res, cur + char('a' + i));
            }
        }
    }
};

int main()
{
    Trie t;
    int n;
    cin >> n;
    vector<string> a(n);
    for (auto &i : a)
    {
        cin >> i;
        t.insert(i);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        t.find(s);
    }
    return 0;
}