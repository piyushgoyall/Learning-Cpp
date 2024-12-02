#include <bits/stdc++.h>
using namespace std;

class HashEntry
{
public:
    string key;
    int value;
    HashEntry *next;

    HashEntry()
    {
        key = "";
        value = -1;
        next = NULL;
    }

    HashEntry(string k, int val)
    {
        key = k;
        value = val;
        next = NULL;
    }
};

// Class to represent entire hash table
class HashTable
{
private:
    HashEntry **bucket;
    int slots;
    int size;

public:
    HashTable(int s)
    {
        bucket = new HashEntry *[s];
        // Initialise all elements of array as NULL
        for (int i = 0; i < s; i++)
            bucket[i] = NULL;
        slots = s;
        size = 0;
    }

    ~HashTable() // Destructor to clean up memory
    {
        for (int i = 0; i < slots; i++)
        {
            while (bucket[i] != NULL)
            {
                HashEntry *next = bucket[i]->next;
                delete bucket[i];
                bucket[i] = next;
            }
        }
        delete[] bucket;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return getSize() == 0;
    }

    int getIndex(string key)
    {
        // hashCode is a built in function of Strings
        // takes key and size of the list

        int Key = 0;
        for (int i = 0; i < key.length(); i++)
        {
            Key = 37 * Key + key[i];
        }
        if (Key < 0)
            Key *= -1;

        return Key % slots;
    }

    void insert(string key, int value)
    {
        // Apply hash function to find index for given key
        int hashIndex = getIndex(key);
        // cout << "hashIndex : " << hashIndex  <<endl;
        if (bucket[hashIndex] == NULL)
        {

            bucket[hashIndex] = new HashEntry(key, value);
            size++;
        }
        else
        { // find next free space

            HashEntry *temp = bucket[hashIndex];
            ;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new HashEntry(key, value);
            size++;
        }
    }

    void display()
    {
        HashEntry *temp;
        for (int i = 0; i < slots; i++)
        {
            if (bucket[i] != NULL)
            {
                cout << "HashIndex : " << i << " ";
                temp = bucket[i];
                while (temp != NULL)
                {
                    cout << "(key = " << temp->key << " , value = " << temp->value << " )";
                    temp = temp->next;
                }
            }
            cout << endl;
        }
    }

    void resize()
    {
        cout << "resize" << endl;
        slots *= 2;
        HashEntry **tempBucket = new HashEntry *[slots];
        for (int i = 0; i < slots; i++)
            tempBucket[i] = NULL;

        for (int i = 0; i < slots / 2; i++)
        {
            if (bucket[i] != NULL)
            {
                HashEntry *temp = bucket[i];
                while (temp != NULL)
                {
                    int hashIndex = getIndex(temp->key);
                    if (tempBucket[hashIndex] == NULL)
                        tempBucket[hashIndex] = new HashEntry(temp->key, temp->value);
                    else
                    { // find next free space
                        HashEntry *tmp = tempBucket[hashIndex];
                        while (tmp->next != NULL)
                            tmp = tmp->next;
                        tmp->next = new HashEntry(temp->key, temp->value);
                    }
                    temp = temp->next;
                }
            }
        }
        for (int i = 0; i < slots / 2; i++)
        {
            while (bucket[i] != NULL)
            {
                HashEntry *next = bucket[i]->next;
                delete bucket[i];
                bucket[i] = next;
            }
        }
        delete bucket;
        bucket = tempBucket;
    }

    int search(string key)
    {
        int hashIndex = getIndex(key);
        if (bucket[hashIndex] == NULL)
        {
            cout << "Value Not Found!" << endl;
            return -1;
        }

        if (bucket[hashIndex]->key == key)
        {
            return bucket[hashIndex]->value;
        }
        else
        { // find next free space

            HashEntry *temp = bucket[hashIndex];

            while (temp != NULL)
            {
                if (temp->key == key)
                {
                    return temp->value;
                }

                temp = temp->next;
            }
            cout << "Value Not Found!" << endl;
            return -1;
        }
    }

    void Delete(string key)
    {
        int hashIndex = getIndex(key);
        if (bucket[hashIndex] == NULL)
        {
            cout << "Value To Be Deleted Not Found!" << endl;
            return;
        }
        if (bucket[hashIndex]->key == key)
        {
            if (bucket[hashIndex]->next != NULL)
            {
                HashEntry *temp = bucket[hashIndex];
                bucket[hashIndex] = bucket[hashIndex]->next;
                delete temp;
            }
            else
            {
                delete bucket[hashIndex];
                bucket[hashIndex] = NULL;
            }
        }
        else
        { // find next free space

            HashEntry *temp = bucket[hashIndex];
            HashEntry *prev = bucket[hashIndex];
            while (temp != NULL)
            {
                if (temp->key == key)
                {
                    if (temp->next != NULL)
                        prev->next = temp->next;
                    else
                        prev->next = NULL;

                    delete temp;
                    return;
                }
                prev = temp;
                temp = temp->next;
            }
            cout << "Value to be deleted not Found!" << endl;
        }
    }
};

int main()
{

    HashTable ht(10);
    ht.insert("London", 2);
    ht.insert("London", 10);
    ht.insert("New York", 15);
    ht.insert("Tokyo", 7);
    ht.insert("Bangkok", 2);
    ht.insert("Beijing", 6);
    ht.insert("Islamabad", 9);

    ht.display();
    ht.Delete("London");
    ht.display();
    ht.Delete("Moscow");
    ht.display();
    ht.Delete("Islamabad");
    ht.display();
}