#include <bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> listA;
    forward_list<int> listB;
    forward_list<int> listC;

    listA.assign({ 1, 2, 3 });
    listB.assign(5, 10);
    listC.assign(listA.begin(), listA.end());

    cout << "The elements of listA are : ";
    for (int& item : listA)
        cout << item << " ";
    cout << endl;

    cout << "The elements of listB are : ";
    for (int& item : listB)
        cout << item << " ";
    cout << endl;

    cout << "The elements of listC are : ";
    for (int& item : listC)
        cout << item << " ";
    cout << endl;

    listA.push_front(4);
    listB.push_front(5);
    listC.push_front(6);

    cout << "After push_front operation on listA: ";
    for (int& item : listA)
        cout << item << " ";
    cout << endl;

    listA.pop_front();
    cout << "After pop_front operation on listA: ";
    for (int& item : listA)
        cout << item << " ";
    cout << endl;

    listB.insert_after(listB.begin(), 15);
    cout << "After insert_after operation on listB: ";
    for (int& item : listB)
        cout << item << " ";
    cout << endl;

    listB.erase_after(listB.begin());
    cout << "After erase_after operation on listB: ";
    for (int& item : listB)
        cout << item << " ";
    cout << endl;

    listC.reverse();
    cout << "After reverse operation on listC: ";
    for (int& item : listC)
        cout << item << " ";
    cout << endl;

    listC.remove(10);
    cout << "After remove operation on listC (removing 10): ";
    for (int& item : listC)
        cout << item << " ";
    cout << endl;

    listA.emplace_front(7);
    cout << "After emplace_front operation on listA: ";
    for (int& item : listA)
        cout << item << " ";
    cout << endl;

    cout << "Size of listA: " << distance(listA.begin(), listA.end()) << endl;
    cout << "Size of listB: " << distance(listB.begin(), listB.end()) << endl;
    cout << "Size of listC: " << distance(listC.begin(), listC.end()) << endl;

    return 0;
}
