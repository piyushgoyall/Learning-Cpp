#include <iostream>
using namespace std;

class NStack
{
private:
    int *arr;     // Array to hold all stacks
    int *top;     // Array to hold top indexes of each stack
    int *next;    // Array to hold the next index
    int freeSpot; // To keep track of the next free spot
    int n, size;  // n is the number of stacks, size is the total size of array

public:
    // Constructor to initialize the n stacks
    NStack(int nStacks, int arraySize)
    {
        n = nStacks;
        size = arraySize;
        arr = new int[size];
        top = new int[n];
        next = new int[size];

        // Initialize all stacks as empty
        for (int i = 0; i < n; i++)
            top[i] = -1;

        // Initialize all spaces as free
        freeSpot = 0;
        for (int i = 0; i < size - 1; i++)
            next[i] = i + 1;
        next[size - 1] = -1; // -1 indicates end of free list
    }

    // Function to push an element onto stack number 'stackNum'
    void push(int value, int stackNum)
    {
        if (freeSpot == -1)
        {
            cout << "Stack overflow. Cannot push " << value << " into stack " << stackNum << endl;
            return;
        }

        // Get the index for the new element
        int index = freeSpot;

        // Update freeSpot to the next free index
        freeSpot = next[index];

        // Insert the value into the array at the free spot
        arr[index] = value;

        // Update next to point to the old top of the stack
        next[index] = top[stackNum];

        // Update the top to point to the new index
        top[stackNum] = index;
    }

    // Function to pop an element from stack number 'stackNum'
    int pop(int stackNum)
    {
        if (top[stackNum] == -1)
        {
            cout << "Stack underflow. Cannot pop from stack " << stackNum << endl;
            return -1;
        }

        // Get the index of the top element in the stack
        int index = top[stackNum];

        // Update the top to the next element in the stack
        top[stackNum] = next[index];

        // Add this index to the free list
        next[index] = freeSpot;
        freeSpot = index;

        // Return the popped element
        return arr[index];
    }

    // Function to check if a particular stack is empty
    bool isEmpty(int stackNum)
    {
        return top[stackNum] == -1;
    }

    // Destructor to free the allocated memory
    ~NStack()
    {
        delete[] arr;
        delete[] top;
        delete[] next;
    }
};

int main()
{
    int nStacks = 3, size = 10;

    // Create 3 stacks in an array of size 10
    NStack stacks(nStacks, size);

    // Push elements into different stacks
    stacks.push(10, 0);
    stacks.push(20, 0);
    stacks.push(30, 1);
    stacks.push(40, 2);

    // Pop elements from stack 0
    cout << "Popped from stack 0: " << stacks.pop(0) << endl;

    // Push another element into stack 1
    stacks.push(50, 1);

    // Pop elements from stack 1
    cout << "Popped from stack 1: " << stacks.pop(1) << endl;

    // Pop elements from stack 2
    cout << "Popped from stack 2: " << stacks.pop(2) << endl;

    return 0;
}
