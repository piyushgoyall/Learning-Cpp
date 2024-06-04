#include <iostream>
#include <unordered_set>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void insertNode(ListNode *&head, int val)
{
    ListNode *newNode = new ListNode(val);
    if (!head)
    {
        head = newNode;
    }
    else
    {
        ListNode *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }
}

void findTriplet(ListNode *a, ListNode *b, ListNode *c, int target)
{
    unordered_set<int> hashSet;
    ListNode *temp1 = a;
    ListNode *temp2 = b;
    ListNode *temp3 = c;

    // Insert elements of the first list into hashSet
    while (temp1)
    {
        hashSet.insert(temp1->val);
        temp1 = temp1->next;
    }

    // Traverse the second and third lists
    while (temp2)
    {
        while (temp3)
        {
            // Calculate the remaining sum required
            int remainingSum = target - (temp2->val + temp3->val);
            // Check if the remaining sum exists in the hashSet
            if (hashSet.find(remainingSum) != hashSet.end())
            {
                cout << temp2->val << " " << temp3->val << " " << remainingSum << endl;
                return;
            }
            temp3 = temp3->next;
        }
        temp2 = temp2->next;
        temp3 = c; // Reset temp3 for the next iteration of the outer loop
    }

    cout << "No triplet found." << endl;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    ListNode *a = nullptr;
    ListNode *b = nullptr;
    ListNode *c = nullptr;

    int val;
    for (int i = 0; i < n; ++i)
    {
        cin >> val;
        insertNode(a, val);
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> val;
        insertNode(b, val);
    }
    for (int i = 0; i < k; ++i)
    {
        cin >> val;
        insertNode(c, val);
    }

    int target;
    cin >> target;

    findTriplet(a, b, c, target);

    return 0;
}
