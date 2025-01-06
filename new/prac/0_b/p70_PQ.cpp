// Priority Queue using Binary Heap.

#include <iostream>
using namespace std;

int heap[50];
int heapSize = -1;

int getParent(int index) { return (index - 1) / 2; }
int getLeftChild(int index) { return (2 * index) + 1; }
int getRightChild(int index) { return (2 * index) + 2; }

void shiftUp(int index)
{
    while (index > 0 && heap[getParent(index)] < heap[index])
    {
        swap(heap[getParent(index)], heap[index]);
        index = getParent(index);
    }
}

void shiftDown(int index)
{
    int maxIndex = index;
    int left = getLeftChild(index);
    if (left <= heapSize && heap[left] > heap[maxIndex])
        maxIndex = left;
    int right = getRightChild(index);
    if (right <= heapSize && heap[right] > heap[maxIndex])
        maxIndex = right;
    if (index != maxIndex)
    {
        swap(heap[index], heap[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int value)
{
    heapSize++;
    heap[heapSize] = value;
    shiftUp(heapSize);
}

int extractMax()
{
    int maxValue = heap[0];
    heap[0] = heap[heapSize];
    heapSize--;
    shiftDown(0);
    return maxValue;
}

void changePriority(int index, int newValue)
{
    int oldValue = heap[index];
    heap[index] = newValue;
    if (newValue > oldValue)
        shiftUp(index);
    else
        shiftDown(index);
}

int getMax() { return heap[0]; }

void remove(int index)
{
    heap[index] = getMax() + 1;
    shiftUp(index);
    extractMax();
}

int main()
{
    int numElements, value, index, newValue;

    cout << "Enter the number of elements to insert in the priority queue: ";
    cin >> numElements;

    cout << "Enter the elements:\n";
    for (int i = 0; i < numElements; i++)
    {
        cin >> value;
        insert(value);
    }

    cout << "Priority Queue: ";
    for (int i = 0; i <= heapSize; i++)
        cout << heap[i] << " ";
    cout << "\n";

    cout << "Node with maximum priority: " << extractMax() << "\n";

    cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; i++)
        cout << heap[i] << " ";
    cout << "\n";

    cout << "Enter the index to change priority and the new value: ";
    cin >> index >> newValue;
    changePriority(index, newValue);
    cout << "Priority queue after priority change: ";
    for (int i = 0; i <= heapSize; i++)
        cout << heap[i] << " ";
    cout << "\n";

    cout << "Enter the index to remove: ";
    cin >> index;
    remove(index);
    cout << "Priority queue after removing the element: ";
    for (int i = 0; i <= heapSize; i++)
        cout << heap[i] << " ";

    return 0;
}
