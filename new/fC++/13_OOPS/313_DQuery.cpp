// DQUERY - SPOJ Question (Using Mo's Algorithm)

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 2, MOD = 1e9 + 7;

struct Q
{
    int l, r, idx;
};
int rootN;

Q q[N];
bool compare(Q q1, Q q2)
{
    if (q1.l / rootN == q2.l / rootN)
    {
        return q1.r > q2.r;
    }
    return q1.l < q2.l;
}

signed main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    rootN = sqrtl(n);
    int queries;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        int l, r;
        cin >> l >> r;

        q[i].l = l;
        q[i].r = r;
        q[i].idx = i;
    }

    sort(q, q + queries, compare);
    vector<int> ans(queries);
    int cur_l = 0, cur_r = -1, l, r;
    int curr_ans = 0;
    vector<int> freq(10 * N, 0);

    for (int i = 0; i < queries; i++)
    {
        l = q[i].l;
        r = q[i].r;
        l--;
        r--;

        while (cur_r < r)
        {
            cur_r++;
            freq[a[cur_r]]++;
            if (freq[a[cur_r]] == 1)
                curr_ans++;
        }
        while (cur_l > l)
        {
            freq[a[cur_l]]--;
            if (freq[a[cur_l]] == 0)
                curr_ans--;
            cur_l--;
        }
        // while (cur_l > l)
        // {
        //     cur_l--;
        //     freq[a[cur_l]]++;
        //     if (freq[a[cur_l]] == 1)
        //         curr_ans++;
        // }
        while (cur_l < l)
        {
            freq[a[cur_l]]--;
            cur_l++;
            if (freq[a[cur_l]] == 0)
                curr_ans--;
        }
        while (cur_r > r)
        {
            freq[a[cur_r]]--;
            cur_r--;
            if (freq[a[cur_r]] == 0)
                curr_ans--;
        }
        ans[q[i].idx] = curr_ans;
    }
    for (int i = 0; i < queries; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}