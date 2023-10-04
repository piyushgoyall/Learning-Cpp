// Find the largest word in a sentence.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[1000];
    cin >> arr;
    int len = strlen(arr);
    int premax = 0, curlen = 0;
    for (int i = 0; i < len; i++)
    {
        curlen += 1;
        cout << "- " << curlen << " -" << endl;
        if (arr[i] == ' ')
        {
            if (curlen > premax)
            {
                premax = curlen;
                cout << "- " << premax << " -" << endl;
            }
            curlen = 0;
        }
    }
    cout << "Largest word length: " << premax;
    return 0;
}