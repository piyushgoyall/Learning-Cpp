// Guide to interactive problems
// Online Judge
// An online judge is an online system to test programs in programming contests.
// The system can compile and execute code, and test them with pre - constructed data.

// What is an interactive problem?
// The input data given to your program may be not predetermined but is built specifically for your solution.
// Jury writes a special program - interactor, such that its output is transferred to the input of your solution, and the
// output of your program is sent to interactor's input.

// How will you communicate with the OJ?
// - By using cout/cin, scanf/printf.
// - Flush the input, after each cout/cin.

// Why flushing is important?
// - It is possible that this data is first placed to some internal buffer and may be not directly transferred to the interactor.
// In order to avoid such situation you have to use special flush operation each time you output some data.

// Guess the number!
// - In this problem there is some hidden number and you have to interactively guess it.
//   The hidden number is always an integer from 1 to 1000000(10^6)
// - You can make queries to the testing system. Each query is one integer from 1 to 1000000.

// - There are two different responses testing program can provide:
// String "<", if the hidden number is less than the integer in your query
// String ">=", if the hidden number is greater than or equal to the integer in your query.

// - Your program is allowed to make no more than 25 queries(not including printing the answer) to the testing system.
// - When your program wants to guess the hidden number, print string !x, where x is the answer, and
// terminate your program immediately after flushing the output stream.

#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int lo = 1;
    int hi = 1000000;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        cout << mid << endl;
        cout << flush;

        string s;
        cin >> s;
        if (s == "<")
        {
            hi = mid - 1;
        }
        else
        {
            // >=
            ans = max(ans, mid);
            lo = mid + 1;
        }
    }
    cout << "!" << ans << endl;
    cout << flush;
}