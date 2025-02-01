#include <bits/stdc++.h>
using namespace std;

int minPC(string seats)
{
    int n = seats.size(), pcs = 0;
    vector<bool> assigned(n, false);

    for (int i = 0; i < n; i++)
    {
        if (seats[i] == 'S' && !assigned[i])
        {
            if (i + 2 < n && seats[i + 2] == 'S' && seats[i + 1] == '.')
            {
                pcs++;
                assigned[i] = assigned[i + 2] = true;
            }
            else
            {
                pcs++;
                assigned[i] = true;
            }
        }
    }

    return pcs;
}

int main()
{
    string seats;
    cout << "Enter seat arrangement (S for student, . for empty): ";
    cin >> seats;

    cout << "Minimum PCs required: " << minPC(seats) << endl;
    return 0;
}
