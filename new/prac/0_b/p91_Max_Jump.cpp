#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minJumps(vector<int> &arr)
    {
        if (arr.size() == 1)
            return 0;
        if (arr[0] == 0)
            return -1;

        int n = arr.size();

        int i = 0, j, jumpCount = 1;

        while (i < n-1)
        {
            int jumpVal = arr[i];
            int jumpRange = i + jumpVal;
            j = i + 1;
            int maxJump = INT_MIN;
            int bestIdx = -1;

            if (jumpRange >= n - 1)
                return jumpCount;

            cout << "jumpVal: " << jumpVal << " jumpRange: " << jumpRange << " j: " << j << endl;

            while (j <= jumpRange)
            {
                if (arr[j]+j > maxJump)
                {
                    maxJump = arr[j]+j;
                    bestIdx = j;
                }
                cout << "j in loop: " << j << " maxJump: " << maxJump << endl;
                j++;
            }

            if (bestIdx == -1)
                return -1;

            i = bestIdx;
            cout << "New i val and j val: " << i << " " << j << endl;
            jumpCount++;
        }

        return -1;
    }
};

int main()
{

    int n, i, j;
    vector<int> arr;
    string ip;
    int number;
    getline(cin, ip);
    stringstream ss(ip);

    while (ss >> number)
    {
        arr.push_back(number);
    }
    Solution obj;
    cout << obj.minJumps(arr) << endl
         << "~\n";

    return 0;
}