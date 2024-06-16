#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    // Create a forward_list of integers
    forward_list<int> flist = {3, 1, 4, 1, 5, 9, 2};

    // Display the elements of the forward_list
    cout << "Initial forward_list elements: ";
    for (int num : flist)
    {
        cout << num << " ";
    }
    cout << endl;

    // Insert an element at the beginning
    flist.push_front(0);
    cout << "After push_front(0): ";
    for (int num : flist)
    {
        cout << num << " ";
    }
    cout << endl;

    // Remove the first element
    flist.pop_front();
    cout << "After pop_front(): ";
    for (int num : flist)
    {
        cout << num << " ";
    }
    cout << endl;

    // Insert an element after a specific position (after the first element)
    auto it = flist.begin();
    flist.insert_after(it, 6);
    cout << "After insert_after(it, 6): ";
    for (int num : flist)
    {
        cout << num << " ";
    }
    cout << endl;

    // Remove elements with a specific value
    flist.remove(1);
    cout << "After remove(1): ";
    for (int num : flist)
    {
        cout << num << " ";
    }
    cout << endl;

    // Sort the forward_list
    flist.sort();
    cout << "After sort(): ";
    for (int num : flist)
    {
        cout << num << " ";
    }
    cout << endl;

    // Reverse the forward_list
    flist.reverse();
    cout << "After reverse(): ";
    for (int num : flist)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
