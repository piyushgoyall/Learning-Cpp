// Reverse a string

#include <bits/stdc++.h>
using namespace std;

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
    return 0;
}