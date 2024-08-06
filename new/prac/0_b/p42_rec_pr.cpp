// Guess the output recusion

#include <bits/stdc++.h>
using namespace std;

void pass(int n)
{
    if (n == 0)
        return;
    cout << "Pre: " << n << endl;
    pass(n - 1);
    cout << "In: " << n << endl;
    pass(n - 1);
    cout << "Post: " << n << endl;
}

int main()
{
    pass(3);
    return 0;
}