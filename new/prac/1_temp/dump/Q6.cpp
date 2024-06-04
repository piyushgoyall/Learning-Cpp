#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int brr[m];
    string s1 = "", s2 = "";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s1 = s1 + to_string(arr[i]);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
        s2 = s2 + to_string(brr[i]);
    }
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int s = stoi(s1);
    int p = stoi(s2);

    int sum = s + p;
    // cout << sum;

    while (sum > 0)
    {
        cout << sum % 10<<" ";
        sum = sum / 10;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// // Definition for singly-linked list node
// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// // Function to add two numbers represented by linked lists
// ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
// {
//     ListNode *dummy = new ListNode(0);
//     ListNode *curr = dummy;
//     int carry = 0;

//     while (l1 || l2 || carry)
//     {
//         int sum = carry;
//         if (l1)
//         {
//             sum += l1->val;
//             l1 = l1->next;
//         }
//         if (l2)
//         {
//             sum += l2->val;
//             l2 = l2->next;
//         }
//         carry = sum / 10;
//         curr->next = new ListNode(sum % 10);
//         curr = curr->next;
//     }

//     return dummy->next;
// }

// // Function to print the elements of a linked list
// void printList(ListNode *head)
// {
//     while (head)
//     {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     int n1, n2;
//     cout << "Enter the lengths of both linked lists: ";
//     cin >> n1 >> n2;

//     ListNode *l1 = nullptr;
//     ListNode *l2 = nullptr;

//     cout << "Enter the elements of linked list 1: ";
//     for (int i = 0; i < n1; i++)
//     {
//         int num;
//         cin >> num;
//         ListNode *newNode = new ListNode(num);
//         newNode->next = l1;
//         l1 = newNode;
//     }

//     cout << "Enter the elements of linked list 2: ";
//     for (int i = 0; i < n2; i++)
//     {
//         int num;
//         cin >> num;
//         ListNode *newNode = new ListNode(num);
//         newNode->next = l2;
//         l2 = newNode;
//     }

//     ListNode *result = addTwoNumbers(l1, l2);

//     cout << "Sum of the two numbers: ";
//     printList(result);

//     return 0;
// }
