#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue(int n)
    {
        this->size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return (front == -1);
    }

    bool isFull()
    {
        return ((rear + 1) % size == front);
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Overflow!!" << endl;
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }
        arr[rear] = val;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Underflow!!" << endl;
            return -1;
        }
        int val = arr[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
        return val;
    }

    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return arr[front];
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Queue Empty!!" << endl;
        }
        else
        {
            int temp = front;
            while (temp != rear)
            {
                cout << arr[temp] << " ";
                temp = (temp + 1) % size;
            }
            cout << arr[temp] << " ";
            cout << endl;
        }
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.print();
    q.enqueue(6);
    q.dequeue();
    q.enqueue(6);
    q.print();
    return 0;
}
