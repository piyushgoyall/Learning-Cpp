// Find the largest word in a sentence.
// https://www.youtube.com/watch?v=TkTgo_7ab0M&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=32&ab_channel=ApnaCollege

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[1000];
    cin.getline(arr, 1000);
    int len = strlen(arr);
    int premax = 0, curlen = 0;
    // int lstart = 0, lend = 0;
    for (int i = 0; i < len; i++)
    {

        if (arr[i] == ' ')
        {
            if (curlen > premax)
            {
                premax = curlen;
                // lstart=i+1;
                // cout << "- " << premax << " -" << endl;
            }
            curlen = 0;
        }
        else
        {
            curlen += 1;
            // cout << "-- " << curlen << " --" << endl;
        }
    }
    cout << "Largest word length: " << premax;
    return 0;
}