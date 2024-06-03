#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void generateParentheses(int n, int open, int close, string current, vector<string> &result)
{
    if (current.length() == n * 2)
    {
        result.push_back(current);
        return;
    }
    if (open < n)
    {
        generateParentheses(n, open + 1, close, current + '(', result);
    }
    if (close < open)
    {
        generateParentheses(n, open, close + 1, current + ')', result);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> result;
    generateParentheses(n, 0, 0, "", result);
    sort(result.begin(), result.end());
    for (const string &s : result)
    {
        cout << s << endl;
    }
    return 0;
}
