#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;         // stored in stack
    int *p = new int(); // allocate memory in heap
    *p = 10;
    cout << *p << endl;
    delete (p); // deallocate memory
    p = NULL;   // or p = nullptr to remove dangling pointer.
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 10;         // stored in stack
//     int *p = new int(); // allocate memory in heap
//     *p = 10;
//     cout << *p << endl;
//     delete (p); // deallocate memory
//     p = new int[4]{1, 2, 3, 4};
//     for (int i = 0; i < 4; i++)
//     {
//         cout << p[i] << " ";
//     }
//     delete (p);
//     p = NULL;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a = 10;         // stored in stack
//     int *p = new int(); // allocate memory in heap
//     *p = 10;
//     cout << *p << endl;
//     delete (p); // deallocate memory

//     // Issue 1: Incorrect usage of "new" for an array.
//     // Issue 2: Incorrect array initialization syntax.
//     // Issue 3: You need to use "[]" instead of "=" when allocating an array.
//     p = new int[4]{0, 1, 2, 3};

//     // Issue 4: You should loop through and print elements of the dynamic array.
//     for (int i = 0; i < 4; i++)
//     {
//         cout << p[i] << " ";
//     }
//     cout << endl;

//     // Issue 5: Use "delete[]" to deallocate memory for an array.
//     delete[] p;

//     // Issue 6: Setting a pointer to NULL is not necessary in modern C++.
//     // p = NULL;

//     return 0;
// }
