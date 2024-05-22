// Input a string and reverse only the voewels in the string. Ex: hello -> holle

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int i = 0, j = n-1;

    while(i<j)
    {
        if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (s[j] != 'a' || s[j] != 'e' || s[j] != 'i' || s[j] != 'o' || s[j] != 'u'))
        {
            j--;
        }

        else if ((s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u') && (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'))
        {
            i++;
        }
        else
        {
            i++;
            j--;
        }
    }
    cout << s;
    return 0;
}