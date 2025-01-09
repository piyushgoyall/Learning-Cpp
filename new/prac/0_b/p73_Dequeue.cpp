// Dequeue of pairs

#include <bits/stdc++.h>
using namespace std;

void addFront(deque<pair<string, bool>> &container, string s, bool b)
{
    container.push_front(make_pair(s, b));
}

void addBack(deque<pair<string, bool>> &container, string s, bool b)
{
    container.push_back(make_pair(s, b));
}

void removeFront(deque<pair<string, bool>> &container)
{
    if (!container.empty())
    {
        container.pop_front();
    }
}

void removeBack(deque<pair<string, bool>> &container)
{
    if (!container.empty())
    {
        container.pop_back();
    }
}

void print(deque<pair<string, bool>> &container)
{
    for (auto p : container)
    {
        cout << "[ " << p.first << ' ' << (p.second ? "true" : "false") << " ]\n";
    }
}

pair<string, bool> getFront(deque<pair<string, bool>> &container)
{
    return container.front();
}

pair<string, bool> getBack(deque<pair<string, bool>> &container)
{
    return container.back();
}

bool isEmpty(deque<pair<string, bool>> &container)
{
    return container.empty();
}

void clearDeque(deque<pair<string, bool>> &container)
{
    container.clear();
}

size_t getSize(deque<pair<string, bool>> &container)
{
    return container.size();
}

int main()
{
    deque<pair<string, bool>> container;

    addFront(container, "Task1", false);
    addBack(container, "Task2", true);
    addFront(container, "Task3", false);
    addBack(container, "Task4", true);

    cout << "Deque elements:\n";
    print(container);

    cout << "\nFront element: [ " << getFront(container).first << ' ' << (getFront(container).second ? "true" : "false") << " ]\n";
    cout << "Back element: [ " << getBack(container).first << ' ' << (getBack(container).second ? "true" : "false") << " ]\n";

    cout << "\nDeque size: " << getSize(container) << "\n";

    removeFront(container);
    cout << "\nAfter removing front:\n";
    print(container);

    removeBack(container);
    cout << "\nAfter removing back:\n";
    print(container);

    cout << "\nIs deque empty? " << (isEmpty(container) ? "Yes" : "No") << "\n";

    clearDeque(container);
    cout << "\nAfter clearing deque:\n";
    cout << "Is deque empty? " << (isEmpty(container) ? "Yes" : "No") << "\n";

    return 0;
}
