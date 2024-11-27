#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp)
{
    if (st.size() == 0 || st.top() <= temp)
    {
        st.push(temp);
        return;
    }

    int val = st.top();
    st.pop();
    insert(st, temp);
    st.push(val);
}

void sort(stack<int> &st)
{
    if (st.size() == 1)
    {
        return;
    }

    int temp = st.top();
    st.pop();
    sort(st);
    insert(st, temp);
}

void print(stack<int> &st)
{
    if (st.empty())
        return;

    int temp = st.top();
    st.pop();
    print(st);
    cout << temp << " ";
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

    sort(st);
    print(st);
    for (int i = 0; i < n; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}