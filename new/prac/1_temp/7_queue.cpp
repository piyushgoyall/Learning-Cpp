#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;     // Dynamic array to store queue elements
    int front;    // Front points to the front element in the queue
    int rear;     // Rear points to the last element in the queue
    int capacity; // Maximum capacity of the queue
    int count;    // Current size of the queue

public:
    // Constructor to initialize the queue
    Queue(int size = 10001)
    {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }

    // Destructor to free memory allocated to the queue
    ~Queue()
    {
        delete[] arr;
    }

    // Utility function to remove front element from the queue
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Underflow\nProgram Terminated\n";
            return;
        }

        cout << "Removing " << arr[front] << endl;

        front = (front + 1) % capacity;
        count--;
    }

    // Utility function to add an item to the queue
    void enqueue(int item)
    {
        if (isFull())
        {
            cout << "Overflow\nProgram Terminated\n";
            return;
        }

        rear = (rear + 1) % capacity;
        arr[rear] = item;
        count++;
    }

    // Utility function to return the front element of the queue
    int peek()
    {
        if (isEmpty())
        {
            cout << "Underflow\nProgram Terminated\n";
            return -1;
        }
        return arr[front];
    }

    // Utility function to return the size of the queue
    int size()
    {
        return count;
    }

    // Utility function to check if the queue is empty or not
    bool isEmpty()
    {
        return (size() == 0);
    }

    // Utility function to check if the queue is full or not
    bool isFull()
    {
        return (size() == capacity);
    }
};

int main()
{
    // Create a queue of capacity 5
    Queue q(5);

    // Perform operations on the queue
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "Front element is: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();

    q.enqueue(6);

    cout << "Queue size is " << q.size() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    if (q.isEmpty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Queue is not empty\n";
    }

    return 0;
}
