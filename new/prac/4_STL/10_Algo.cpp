#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6 ->  " << binary_search(v.begin(), v.end(), 6) << endl;

    // auto lower = lower_bound(v.begin(), v.end(), 6);
    // auto upper = upper_bound(v.begin(), v.end(), 6);

    // cout << "Lower-bound -> " << *lower << endl;
    // cout << "Upper-bound -> " << *upper << endl;

    cout << "Lower-bound -> " << lower_bound(v.begin(), v.end(), 1) - v.begin() << endl;
    cout << "Upper-bound -> " << upper_bound(v.begin(), v.end(), 1) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "Max -> " << max(a, b) << endl;
    cout << "Min -> " << min(a, b) << endl;

    swap(a, b);
    cout << endl
         << "a -> " << a << endl
         << "b -> " << b << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String -> " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After Rotate: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After sorting: " << endl;
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}