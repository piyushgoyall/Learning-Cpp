#include <iostream>
#include <string>
using namespace std;

string toggleCase(string str)
{
    for (char &c : str)
    {
        if (isupper(c))
        {
            c = tolower(c);
        }
        else if (islower(c))
        {
            c = toupper(c);
        }
    }
    return str;
}

int main()
{
    string S;
    getline(cin, S);

    cout << toggleCase(S) << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

string toggleCase(string str)
{
    for (char &c : str)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += ('a' - 'A'); // Convert uppercase to lowercase
        }
        else if (c >= 'a' && c <= 'z')
        {
            c -= ('a' - 'A'); // Convert lowercase to uppercase
        }
    }
    return str;
}

int main()
{
    string S;
    getline(cin, S);

    cout << toggleCase(S) << endl;

    return 0;
}
