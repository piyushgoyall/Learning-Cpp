#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0;
        // 0  //0   //1   //1
    i = i++ - --i + ++i - i--;
    cout << i << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i = 1, j = 2;
//     int k;
//        //1 //2  //1    //2  //3   //4
//     k = i + j + i++ + j++ + ++i + ++j;
//     cout << i << "\t" << j << "\t" << k << endl;
//     return 0;
// }