#include <bits/stdc++.h>
using namespace std;

class kQueue
{
    int n;
    int k;
    int *front;
    int *rear;
    int freeSpot;
    int *next;
    int *arr;

public:
    // Constructor to initialize k queues in a single array of size n
    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];

        // Initialize front and rear arrays
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;

        arr = new int[n];
        freeSpot = 0;
    }

    // Function to push an element in the kth queue
    void enqueue(int data, int qn)
    {
        // Overflow check
        if (freeSpot == -1)
        {
            cout << "No empty space is present" << endl;
            return;
        }

        // Find first free index
        int index = freeSpot;

        // Update freeSpot to the next available index
        freeSpot = next[index];

        // If it's the first element in the queue
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            // Link new element to the previous element
            next[rear[qn - 1]] = index;
        }

        // Update the next for the new element
        next[index] = -1;

        // Update rear to the new element
        rear[qn - 1] = index;

        // Insert the data in arr
        arr[index] = data;
    }

    // Function to pop an element from the kth queue
    int dequeue(int qn)
    {
        // Underflow check
        if (front[qn - 1] == -1)
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        // Find the index to pop
        int index = front[qn - 1];

        // Move front forward
        front[qn - 1] = next[index];

        // Manage free slots
        next[index] = freeSpot;
        freeSpot = index;

        // Return the dequeued element
        return arr[index];
    }
};

int main()
{
    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequeue(1) << endl; // Outputs: 10
    cout << q.dequeue(2) << endl; // Outputs: 20
    cout << q.dequeue(1) << endl; // Outputs: 15
    cout << q.dequeue(1) << endl; // Outputs: 25

    return 0;
}
