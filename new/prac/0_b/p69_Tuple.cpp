// Multiset in C++ to store tuples, with a custom comparator to sort the tuples in a specific order.

#include <bits/stdc++.h>
using namespace std;

struct CustomCmp
{
    bool operator()(const tuple<int, int, int> &x, const tuple<int, int, int> &y) const
    {
        if (get<0>(x) == get<0>(y))
        {
            if (get<1>(x) == get<1>(y))
                return get<2>(x) > get<2>(y);
            return get<1>(x) > get<1>(y);
        }
        return get<0>(x) > get<0>(y);
    }
};

void display(const multiset<tuple<int, int, int>, CustomCmp> &mst)
{
    for (const auto &tpl : mst)
    {
        cout << get<0>(tpl) << ' ' << get<1>(tpl) << ' ' << get<2>(tpl) << '\n';
    }
}

int main()
{
    multiset<tuple<int, int, int>, CustomCmp> mst;

    mst.insert(make_tuple(1, 2, 3));
    mst.insert(make_tuple(2, 3, 5));
    mst.insert(make_tuple(2, 3, 5));
    mst.insert(make_tuple(2, 1, 4));
    mst.insert(make_tuple(5, 8, 4));

    display(mst);

    return 0;
}
