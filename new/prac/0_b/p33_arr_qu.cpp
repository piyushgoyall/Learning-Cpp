#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
class Queue
{
private:
    int front, rear, size;
    unsigned capacity;
    T *array;

public:
    Queue(unsigned capacity) : front(0), size(0), capacity(capacity), rear(capacity - 1)
    {
        array = new T[capacity];
    }

    ~Queue()
    {
        delete[] array;
    }

    bool IsFull()
    {
        return size == capacity;
    }

    bool IsEmpty()
    {
        return size == 0;
    }

    void Enqueue(T item)
    {
        if (IsFull())
            throw runtime_error("Queue is full");
        rear = (rear + 1) % capacity;
        array[rear] = item;
        size++;
    }

    T Dequeue()
    {
        if (IsEmpty())
            throw runtime_error("Queue is empty");
        T item = array[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }

    T Front()
    {
        if (IsEmpty())
            throw runtime_error("Queue is empty");
        return array[front];
    }

    T Rear()
    {
        if (IsEmpty())
            throw runtime_error("Queue is empty");
        return array[rear];
    }
};

int main()
{
    int size = 5;
    Queue<int> **arrayOfQueues = new Queue<int> *[size];

    for (int i = 0; i < size; i++)
    {
        arrayOfQueues[i] = new Queue<int>(10);
    }

    // Enqueue elements into the queues
    arrayOfQueues[0]->Enqueue(10);
    arrayOfQueues[0]->Enqueue(20);
    arrayOfQueues[1]->Enqueue(30);
    arrayOfQueues[2]->Enqueue(40);
    arrayOfQueues[2]->Enqueue(50);
    arrayOfQueues[2]->Enqueue(60);

    // Dequeue and print elements from the queues
    for (int i = 0; i < size; i++)
    {
        cout << "Queue " << i << ": ";
        while (!arrayOfQueues[i]->IsEmpty())
        {
            cout << arrayOfQueues[i]->Dequeue() << " ";
        }
        cout << endl;
    }

    // Free up space
    delete[] arrayOfQueues;

    return 0;
}
