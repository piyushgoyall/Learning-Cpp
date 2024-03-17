// Heap STL
// MAXHEAP : priority-queue<int, vector<int>>
// MINHEAP : priority-queue<int,vector<int>,greater<int>>
// push = O(log(n))
// pop = O(log(n))
// top = O(1)
// size = O(1)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) __builtin_popcount(x)

signed main()
{
    priority_queue<int, vector<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    
    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(2);
    pqm.push(3);
    pqm.push(1);
    cout << pqm.top() << endl;
    pqm.pop();
    cout << pqm.top() << endl; // Add a semicolon here
}
