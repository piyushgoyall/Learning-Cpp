#include <iostream>
#include <vector>

using namespace std;

class MinHeap
{
private:
    vector<int> heap;

    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    void insert(int key);
    int extractMin();
    int getMin();
    void printHeap();
};

// Heapify up to maintain heap property after insertion
void MinHeap::heapifyUp(int index)
{
    if (index && heap[(index - 1) / 2] > heap[index])
    {
        swap(heap[index], heap[(index - 1) / 2]);
        heapifyUp((index - 1) / 2);
    }
}

// Heapify down to maintain heap property after extraction
void MinHeap::heapifyDown(int index)
{
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    int smallest = index;

    if (leftChild < heap.size() && heap[leftChild] < heap[smallest])
    {
        smallest = leftChild;
    }
    if (rightChild < heap.size() && heap[rightChild] < heap[smallest])
    {
        smallest = rightChild;
    }
    if (smallest != index)
    {
        swap(heap[index], heap[smallest]);
        heapifyDown(smallest);
    }
}

// Insert a new key into the heap
void MinHeap::insert(int key)
{
    heap.push_back(key);
    int index = heap.size() - 1;
    heapifyUp(index);
}

// Extract the minimum element from the heap
int MinHeap::extractMin()
{
    if (heap.size() == 0)
    {
        throw out_of_range("Heap is empty");
    }

    int minElement = heap.front();
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0);

    return minElement;
}

// Get the minimum element without removing it
int MinHeap::getMin()
{
    if (heap.size() == 0)
    {
        throw out_of_range("Heap is empty");
    }

    return heap.front();
}

// Print the heap
void MinHeap::printHeap()
{
    for (int val : heap)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    MinHeap minHeap;

    minHeap.insert(3);
    minHeap.insert(2);
    minHeap.insert(15);
    minHeap.insert(5);
    minHeap.insert(4);
    minHeap.insert(45);

    cout << "Min-Heap elements: ";
    minHeap.printHeap();

    cout << "Extracted min: " << minHeap.extractMin() << endl;
    cout << "Min-Heap elements after extraction: ";
    minHeap.printHeap();

    cout << "Current min: " << minHeap.getMin() << endl;

    return 0;
}
