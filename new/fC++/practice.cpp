// Linked List
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    Node *getHead()
    {
        return head;
    }

    bool isEmpty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }

    void printList()
    {
        if (isEmpty())
            cout << "Empty List";
        Node *it = head;
        cout << "List: ";
        while (it != NULL)
        {
            cout << it->val << " --> ";
            it = it->next;
        }
        cout << "NULL";
    }

    void insertAtHead(int data)
    {
        Node *n = new Node();
        n->val = data;
        n->next = head;
        head = n;
    }

    void insertAtTail(int data)
    {
        Node *n = new Node();
        n->val = data;
        n->next = NULL;

        if (head == NULL)
        {
            head = n;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = n;
        }
    }
};

int main()
{
    LinkedList l1;
    // cout << l1.getHead() << endl;
    // cout << l1.isEmpty() << endl;
    l1.insertAtHead(4);
    l1.insertAtTail(5);
    l1.insertAtHead(3);
    l1.insertAtHead(2);
    l1.insertAtHead(1);
    l1.insertAtHead(0);

    l1.insertAtTail(6);
    l1.insertAtTail(7);
    l1.insertAtTail(8  );
    l1.printList();
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Arr
// {
//     int *dyn;
//     int idx;
//     int capacity;

// public:
//     Arr(int size)
//     {
//         dyn = new int[size];
//         idx = 0;
//         capacity = size;
//     }

//     void resize()
//     {
//         int newCap = capacity * 2;
//         int *temp = new int[newCap];
//         for (int i = 0; i < idx; i++)
//             temp[i] = dyn[i];
//         delete[] dyn;
//         dyn = temp;
//         capacity = capacity * 2;
//     }

//     void insert(int val)
//     {
//         if (idx < capacity)
//         {
//             dyn[idx] = val;
//             idx = idx + 1;
//         }
//         else
//         {
//             resize();
//             dyn[idx] = val;
//             idx = idx + 1;
//         }
//     }
//     void print()
//     {
//         // for (int i = 0; i < capacity; i++)
//         for (int i = 0; i < idx; i++)
//         {
//             cout << dyn[i] << " ";
//         }
//     }
//     ~Arr()
//     {
//         delete[] dyn;
//     }
// };

// int main()
// {
//     Arr a1(1);
//     a1.insert(1);
//     a1.insert(2);
//     a1.print();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Empty();
// int main()
// {
//     cout<<sizeof(Empty);
//     return 0;
// }

// // classes example
// #include <iostream>
// using namespace std;

// class Rectangle
// {
//     int width, height;

// public:
//     void set_values(int, int);
//     int area()
//     {
//         return width * height;
//     }
// };

// void Rectangle::set_values(int x, int y)
// {
//     width = x;
//     height = y;
// }

// int main()
// {
//     Rectangle rect;
//     rect.set_values(3, 4);
//     cout << "area: " << rect.area();
//     return 0;
// }

// #include <bits/stdc++.h>
// const int MAX = 100;
// using namespace std;
// void mm(int fM[MAX][MAX], int sM[MAX][MAX], int result[MAX][MAX], int r1, int c1, int r2, int c2)
// {
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             result[i][j] = 0;
//             for (int k = 0; k < c1; k++)
//             {
//                 result[i][j] += fM[i][k] * sM[k][j];
//             }
//         }
//     }
// }
// int main()
// {
//     int firstM[MAX][MAX], secondM[MAX][MAX], result[MAX][MAX], r1, c1, r2, c2;
//     cin >> r1 >> c1;
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             cin >> firstM[i][j];
//         }
//     }
//     cin >> r2 >> c2;
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             cin >> secondM[i][j];
//         }
//     }
//     if (r2 != c1)
//     {
//         cout << "ERROR";
//     }
//     else
//     {
//         mm(firstM, secondM, result, r1, c1, r2, c2);
//         cout << "OUTPUT" << endl;
//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 cout << result[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// // C++ implementation of right rotation
// // of an array K number of times
// #include<bits/stdc++.h>
// using namespace std;

// // Function to rightRotate array
// void RightRotate(int a[], int n, int k)
// {

// 	// If rotation is greater
// 	// than size of array
// 	k = k % n;

// 	for(int i = 0; i < n; i++)
// 	{
// 	if(i < k)
// 	{

// 		// Printing rightmost
// 		// kth elements
// 		cout << a[n + i - k] << " ";
// 	}
// 	else
// 	{

// 		// Prints array after
// 		// 'k' elements
// 		cout << (a[i - k]) << " ";
// 	}
// 	}
// 	cout << "\n";
// }

// Driver code
// int main()
// {
//     int Array[] = {1, 2, 3, 4, 5};
//     int N = sizeof(Array) / sizeof(Array[0]);
//     int K = 2;

//     RightRotate(Array, N, K);
// }

// This code is contributed by Surendra_Gangwar

// #include <bits/stdc++.h>
// using namespace std;
// static string name[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
// void toPrint(int n)
// {
//     if (n == 0)
//         return;
//     else
//     {
//         toPrint(n / 10);
//         cout << name[n % 10] << " ";
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     toPrint(n);
// }

// #include <bits/stdc++.h>
// using namespace std;

// int split(int arr[], int start, int end)
// {
//     if (start >= end)
//         return 0;

//     for (int i = start; i <= end; i++)
//     {
//         int left = 0;
//         for (int j = start; j <= i; j++)
//         {
//             left += arr[j];
//         }
//         int right = 0;
//         for (int j = i + 1; j <= end; j++)
//         {
//             right += arr[j];
//         }

//         if (left == right)
//         {
//             return 1 + max(split(arr, start, i), split(arr, i + 1, end));
//         }
//     }

//     return 0;
// }

// int main()
// {
//     int test_cases;
//     cin >> test_cases;

//     while (test_cases--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         int result = split(arr, 0, n - 1);
//         cout << result << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number of Fibonacci numbers to generate: ";
//     cin >> n;

//     int first = 0, second = 1;

//     if (n >= 1)
//     {
//         cout << "Fibonacci Series:" << endl;
//         cout << first << " ";
//     }

//     if (n >= 2)
//     {
//         cout << second << " ";
//     }

//     for (int i = 2; i < n; i++)
//     {
//         int next = first + second;
//         cout << next << " ";
//         first = second;
//         second = next;
//     }

//     return 0;
// }

// // Create three classes by name Day, Month and Year to store the day of the month, the month in two digits and the year in four digits respectively from the user.
// // Now the print the entire date as dd-mm-yyyy format in main function().

// #include <iostream>
// #include <iomanip>
// using namespace std;
// class Day
// {
// private:
//     int date;

// public:
//     Day(int d)
//     {
//         date = d;
//     }
//     int ddis()
//     {
//         return date;
//     }
// };

// class Month
// {
// private:
//     int month;

// public:
//     Month(int m)
//     {
//         month = m;
//     }
//     int mdis()
//     {
//         return month;
//     }
// };

// class Year
// {
// private:
//     int year;

// public:
//     Year(int y)
//     {
//         year = y;
//     }
//     int ydis()
//     {
//         return year;
//     }
// };

// int main()
// {
//     Day d(2);
//     Month m(12);
//     Year y(2023);
//     cout << setfill('0') << setw(2) << d.ddis() << "-" << m.mdis() << "-" << y.ydis() << endl;
// }

// // Q.3 Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'.
// // The class has three constructors which are:
// // 1- having no parameter - values of both length and breadth are assigned zero
// // 2- having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
// // 3- having one number as parameter - both length and breadth are assigned that number.
// // Create objects of the 'Rectangle class having none, one and two parameters and print their areas.

// #include <iostream>
// using namespace std;
// class Rectangle
// {
// private:
//     int l;
//     int b;

// public:
//     Rectangle()
//     {
//         l = 0;
//         b = 0;
//     }
//     Rectangle(int x, int y)
//     {
//         l = x;
//         b = y;
//     }
//     Rectangle(int z)
//     {
//         l = z;
//         b = z;
//     }
//     int dis()
//     {
//         return l * b;
//     }
// };
// int main()
// {
//     Rectangle r;
//     cout << r.dis() << endl;
//     Rectangle r1(10, 20);
//     cout << r1.dis() << endl;
//     Rectangle r2(15);
//     cout << r2.dis() << endl;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class Main
// {
// public:
//     int amount;
//     Main()
//     {
//         amount = 50;
//     }
//     Main(int x)
//     {
//         amount = x;
//     }
//     void print()
//     {
//         cout << amount << endl;
//     }
// };
// int main()
// {
//     Main m;
//     m.print();
//     Main m1(200);
//     m1.print();
// }

// // C++ implementation of right rotation of an array K number of times
// #include <bits/stdc++.h>
// using namespace std;

// // Function to rightRotate array
// void RightRotate(int a[], int n, int k)
// {

//     // If rotation is greater
//     // than size of array
//     k = k % n;

//     for (int i = 0; i < n; i++)
//     {
//         if (i < k)
//         {

//             // Printing rightmost
//             // kth elements
//             cout << a[n + i - k] << " ";
//         }
//         else
//         {

//             // Prints array after
//             // 'k' elements
//             cout << (a[i - k]) << " ";
//         }
//     }
//     cout << "\n";
// }

// // Driver code
// int main()
// {
//     int Array[] = {1, 2, 3, 4, 5};
//     int N = sizeof(Array) / sizeof(Array[0]);
//     int K = 2;

//     RightRotate(Array, N, K);
// }

// #include <iostream>
// using namespace std;

// int max(int a, int b)
// {
//     if (a > b)
//     {
//         return a;
//     }
//     return b;
// }

// int score(int *a, int s, int e)
// {
//     // base case
//     if (s >= e)
//     {
//         return 0;
//     }

//     // recursive case
//     for (int i = s; i <= e; i++)
//     {
//         // left sum
//         int left = 0;
//         for (int j = s; j <= i; j++)
//         {
//             left += a[j];
//         }
//         // right sum
//         int right = 0;
//         for (int j = i + 1; j <= e; j++)
//         {
//             right += a[j];
//         }
//         if (left == right)
//         {
//             return 1 + max(score(a, s, i), score(a, i + 1, e));
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int a[10000];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << score(a, 0, n - 1) << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int myvar = 25;
//     // int *foo = &myvar;
//     // int bar = myvar;
//     // int baz = *foo;
//     // cout << *foo << endl;
//     // cout << bar << endl;
//     // cout << baz << endl;

//     int firstvalue, secondvalue;
//     int *mypointer = &firstvalue;
//     *mypointer = 10;
//     mypointer = &secondvalue;
//     *mypointer = 20;
//     cout << "firstvalue is " << firstvalue << '\n';
//     cout << "secondvalue is " << secondvalue << '\n';

//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class Add
// {
// public:
//     int a, b;
//     Add(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void plus()
//     {
//         cout << a + b << endl;
//     }
// };
// int main()
// {
//     int p, q;
//     cin >> p >> q;
//     Add a(p, q);
//     a.plus();
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Inclassfun
// {
// public:
//     int num1;
//     int num2;
//     void plus()
//     {
//         cout << "Sum: " << num1 + num2;
//     }
// };
// int main()
// {
//     Inclassfun i;
//     // i.num1 = 10;
//     // i.num2 = -5;
//     cin>>i.num1>>i.num2;
//     i.plus();
//     return 0;
// }

// // *************************** CLASS *******************************

// #include <bits/stdc++.h>
// using namespace std;
// class New
// {
// public:
//     int num1;
//     int num2;
// };
// int main()
// {
//     New n;
//     n.num1 = 5;
//     n.num2 = 5;
//     cout << n.num1 + n.num2;
//     return 0;
// }