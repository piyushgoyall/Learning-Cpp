// Output length of string 

#include <bits/stdc++.h>
using namespace std;

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
    return 0;
}