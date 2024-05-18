// Min Heap

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class MinHeap
{
private:
    vector<int> heap;

    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    void heapifyUp(int index)
    {
        if (index && heap[parent(index)] > heap[index])
        {
            swap(heap[index], heap[parent(index)]);
            heapifyUp(parent(index));
        }
    }

    void heapifyDown(int index)
    {
        int left = leftChild(index);
        int right = rightChild(index);
        int smallest = index;

        if (left < heap.size() && heap[left] < heap[smallest])
        {
            smallest = left;
        }

        if (right < heap.size() && heap[right] < heap[smallest])
        {
            smallest = right;
        }

        if (smallest != index)
        {
            swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

public:
    void push(int element)
    {
        heap.push_back(element);
        int index = heap.size() - 1;
        heapifyUp(index);
    }

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

    int top()
    {
        if (heap.size() == 0)
        {
            throw out_of_range("Heap is empty");
        }
        return heap.front();
    }

    bool empty() const
    {
        return heap.empty();
    }

    int size() const
    {
        return heap.size();
    }
};

int main()
{
    MinHeap pq;

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
