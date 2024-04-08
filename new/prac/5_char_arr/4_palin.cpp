// Check Plaidrome.

#include <bits/stdc++.h>
using namespace std;

char toLower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else 
        return ch - 'A' + 'a';
}

bool checkPalin(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void rev(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLen(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Your name is: ";
    cout << name << endl;

    cout << "Length: " << getLen(name) << endl;

    int len = getLen(name);
    rev(name, len);

    cout << "Your name is: ";
    cout << name << endl;

    cout << "Palindrome or Not: " << checkPalin(name, len) << endl;

    cout << "Character is: " << toLower('b') << endl;
    cout << "Character is: " << toLower('&') << endl;
    return 0;
}