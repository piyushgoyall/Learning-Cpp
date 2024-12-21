#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main()
{
    // empty multiset container
    multiset<int, greater<int>> ms1;

    // insert elements in random order
    ms1.insert(40);
    ms1.insert(30);
    ms1.insert(60);
    ms1.insert(20);
    ms1.insert(50);

    // 50 will be added again to
    // the multiset unlike set
    ms1.insert(50);
    ms1.insert(10);

    // printing multiset ms1
    multiset<int, greater<int>>::iterator it;
    cout << "\nThe multiset ms1 is : \n";
    for (it = ms1.begin(); it != ms1.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // assigning the elements from ms1 to ms2
    multiset<int> ms2(ms1.begin(), ms1.end());

    // print all elements of the multiset ms2
    cout << "\nThe multiset ms2 \n"
            "after assign from ms1 is : \n";
    for (it = ms2.begin(); it != ms2.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // remove all elements up to element
    // with value 30 in ms2
    cout << "\nms2 after removal \n"
            "of elements less than 30 : \n";
    ms2.erase(ms2.begin(), ms2.find(30));
    for (it = ms2.begin(); it != ms2.end(); ++it)
    {
        cout << *it << " ";
    }

    // remove all elements with value 50 in ms2
    int removedCount;
    removedCount = ms2.erase(50);
    cout << "\nms2.erase(50) : \n";
    cout << removedCount << " removed \n";
    for (it = ms2.begin(); it != ms2.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    // lower bound and upper bound for multiset ms1
    cout << "\nms1.lower_bound(40) : \n"
         << *ms1.lower_bound(40) << endl;
    cout << "ms1.upper_bound(40) : \n"
         << *ms1.upper_bound(40) << endl;

    // lower bound and upper bound for multiset ms2
    cout << "ms2.lower_bound(40) : \n"
         << *ms2.lower_bound(40) << endl;
    cout << "ms2.upper_bound(40) : \n"
         << *ms2.upper_bound(40) << endl;

    // demonstrating additional multiset functions
    multiset<int> ms3;
    ms3.insert(10);
    ms3.insert(10);
    ms3.insert(10);

    // it will give output 3
    cout << "\nms3.count(10): " << ms3.count(10) << endl;

    // removing a single instance of 10
    ms3.erase(ms3.find(10));

    // it will give output 2
    cout << "ms3.count(10) after removing one instance: " << ms3.count(10) << endl;

    // removing all instances of 10
    ms3.erase(10);

    // it will give output 0
    cout << "ms3.count(10) after removing all instances: " << ms3.count(10) << endl;

    return 0;
}
