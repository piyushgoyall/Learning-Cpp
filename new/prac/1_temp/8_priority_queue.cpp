// Max Heap

#include <iostream>
#include <vector>

using namespace std;

class PriorityQueue
{
private:
    vector<int> heap;

    // Helper function to swap elements in the heap
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    // Helper function to heapify up
    void heapifyUp(int index)
    {
        if (index && heap[parent(index)] < heap[index])
        {
            swap(heap[index], heap[parent(index)]);
            heapifyUp(parent(index));
        }
    }

    // Helper function to heapify down
    void heapifyDown(int index)
    {
        int left = leftChild(index);
        int right = rightChild(index);
        int largest = index;

        if (left < heap.size() && heap[left] > heap[largest])
        {
            largest = left;
        }

        if (right < heap.size() && heap[right] > heap[largest])
        {
            largest = right;
        }

        if (largest != index)
        {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

    // Helper functions to get the indices of parent and children
    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

public:
    // Function to insert an element into the priority queue
    void push(int element)
    {
        heap.push_back(element);
        int index = heap.size() - 1;
        heapifyUp(index);
    }

    // Function to remove and return the maximum element from the priority queue
    int pop()
    {
        if (heap.size() == 0)
        {
            throw out_of_range("Heap is empty");
        }

        int root = heap.front();
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);

        return root;
    }

    // Function to return the maximum element without removing it
    int top()
    {
        if (heap.size() == 0)
        {
            throw out_of_range("Heap is empty");
        }
        return heap.front();
    }

    // Function to check if the priority queue is empty
    bool empty() const
    {
        return heap.empty();
    }

    // Function to get the size of the priority queue
    int size() const
    {
        return heap.size();
    }
};

int main()
{
    PriorityQueue pq;

    pq.push(3);
    pq.push(5);
    pq.push(9);
    pq.push(1);
    pq.push(6);

    cout << "Priority Queue elements (in order of removal): ";
    while (!pq.empty())
    {
        cout << pq.pop() << " ";
    }
    cout << endl;

    return 0;
}
