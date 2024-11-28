#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp)
{
    if (st.empty())
    {
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st, temp);
    st.push(val);
}

void revStack(stack<int> &st)
{
    if (st.size() == 1)
        return;

    int temp = st.top();
    st.pop();
    revStack(st);
    insert(st, temp);
}

int main()
{
    int n;
    cin >> n;

    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        st.push(temp);
    }

    revStack(st);

    for (int i = 0; i < n; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}