// Delete middle element of stack.

#include <bits/stdc++.h>
using namespace std;

void delMid(stack<int> &st, int k)
{
    if (k == 1)
    {
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    delMid(st, k - 1);
    st.push(temp);
}

int main()
{
    int n;
    cin >> n;

    if (n == 0)
        return 0;

    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        st.push(temp);
    }

    int k = (n / 2) + 1;

    delMid(st, k);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}