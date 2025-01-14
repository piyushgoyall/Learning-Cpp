#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<vector<int>> listOfVectors;

    listOfVectors.push_back({1, 2, 3});
    listOfVectors.push_back({4, 5, 6});
    listOfVectors.push_back({7, 8, 9});

    cout << "Initial list of vectors:\n";
    for (const auto &vec : listOfVectors)
    {
        for (int val : vec)
            cout << val << " ";
        cout << "\n";
    }

    // Add a vector to the front of the list
    listOfVectors.push_front({10, 11, 12});
    cout << "\nAfter push_front:\n";
    for (const auto &vec : listOfVectors)
    {
        for (int val : vec)
            cout << val << " ";
        cout << "\n";
    }

    // Remove a vector from the front
    listOfVectors.pop_front();
    cout << "\nAfter pop_front:\n";
    for (const auto &vec : listOfVectors)
    {
        for (int val : vec)
            cout << val << " ";
        cout << "\n";
    }

    // Add a new vector to the back and remove it
    listOfVectors.push_back({13, 14, 15});
    listOfVectors.pop_back();
    cout << "\nAfter adding and removing a vector at the back:\n";
    for (const auto &vec : listOfVectors)
    {
        for (int val : vec)
            cout << val << " ";
        cout << "\n";
    }

    // Demonstrating functions on a list of integers
    list<int> myList = {10, 20, 30, 40, 50};

    cout << "\nList of integers:\n";
    for (int val : myList)
        cout << val << " ";
    cout << "\n";

    // Access first and last elements
    cout << "First element: " << myList.front() << "\n";
    cout << "Last element: " << myList.back() << "\n";

    // Insert elements
    auto it = myList.begin();
    advance(it, 2);
    myList.insert(it, 25);
    cout << "\nAfter insertion:\n";
    for (int val : myList)
        cout << val << " ";
    cout << "\n";

    // Erase an element
    it = myList.begin();
    advance(it, 1);
    myList.erase(it);
    cout << "\nAfter erasure:\n";
    for (int val : myList)
        cout << val << " ";
    cout << "\n";

    // Reverse the list
    myList.reverse();
    cout << "\nAfter reversing:\n";
    for (int val : myList)
        cout << val << " ";
    cout << "\n";

    // Sort the list
    myList.sort();
    cout << "\nAfter sorting:\n";
    for (int val : myList)
        cout << val << " ";
    cout << "\n";

    // Remove duplicates
    myList.push_back(50);
    myList.unique();
    cout << "\nAfter removing duplicates:\n";
    for (int val : myList)
        cout << val << " ";
    cout << "\n";

    // Merge with another list
    list<int> anotherList = {5, 15, 25};
    myList.merge(anotherList);
    cout << "\nAfter merging:\n";
    for (int val : myList)
        cout << val << " ";
    cout << "\n";

    return 0;
}
