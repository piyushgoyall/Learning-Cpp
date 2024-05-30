#include <iostream>
#include <vector>

using namespace std;

class MaxHeap
{
private:
    vector<int> heap;

    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    void insert(int key);
    int extractMax();
    int getMax();
    void printHeap();
};

// Heapify up to maintain heap property after insertion
void MaxHeap::heapifyUp(int index)
{
    if (index && heap[(index - 1) / 2] < heap[index])
    {
        swap(heap[index], heap[(index - 1) / 2]);
        heapifyUp((index - 1) / 2);
    }
}

// Heapify down to maintain heap property after extraction
void MaxHeap::heapifyDown(int index)
{
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    int largest = index;

    if (leftChild < heap.size() && heap[leftChild] > heap[largest])
    {
        largest = leftChild;
    }
    if (rightChild < heap.size() && heap[rightChild] > heap[largest])
    {
        largest = rightChild;
    }
    if (largest != index)
    {
        swap(heap[index], heap[largest]);
        heapifyDown(largest);
    }
}

// Insert a new key into the heap
void MaxHeap::insert(int key)
{
    heap.push_back(key);
    int index = heap.size() - 1;
    heapifyUp(index);
}

// Extract the maximum element from the heap
int MaxHeap::extractMax()
{
    if (heap.size() == 0)
    {
        throw out_of_range("Heap is empty");
    }

    int maxElement = heap.front();
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0);

    return maxElement;
}

// Get the maximum element without removing it
int MaxHeap::getMax()
{
    if (heap.size() == 0)
    {
        throw out_of_range("Heap is empty");
    }

    return heap.front();
}

// Print the heap
void MaxHeap::printHeap()
{
    for (int val : heap)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    MaxHeap maxHeap;

    maxHeap.insert(3);
    maxHeap.insert(2);
    maxHeap.insert(15);
    maxHeap.insert(5);
    maxHeap.insert(4);
    maxHeap.insert(45);

    cout << "Max-Heap elements: ";
    maxHeap.printHeap();

    cout << "Extracted max: " << maxHeap.extractMax() << endl;
    cout << "Max-Heap elements after extraction: ";
    maxHeap.printHeap();

    cout << "Current max: " << maxHeap.getMax() << endl;

    return 0;
}
