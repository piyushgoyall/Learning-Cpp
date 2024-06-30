#include <vector> // Include directive for std::vector

#include <iostream>

template <typename T>
class MyStack
{
private:
    std::vector<T> stack_list; // Declaration of std::vector with template type T
    int stack_size;

public:
    MyStack()
    {
        stack_size = 0;
    }

    bool isEmpty()
    {
        return stack_size == 0;
    }

    T peek()
    {
        if (isEmpty())
        {
            return -1; // Assuming -1 indicates an empty stack
        }
        return stack_list.back();
    }

    int size()
    {
        return stack_size;
    }

    void push(T value)
    {
        stack_size++;
        stack_list.push_back(value);
    }

    T pop()
    {
        if (isEmpty())
        {
            return -1; // Assuming -1 indicates an empty stack
        }
        T top = stack_list.back();
        stack_list.pop_back();
        stack_size--;
        return top;
    }
};

template <typename T>
class MyQueue
{
public:
    std::vector<T> queue_list;
    int queue_size;

    MyQueue()
    {
        queue_size = 0;
    }

    bool isEmpty()
    {
        return queue_size == 0;
    }

    T front()
    {
        if (isEmpty())
        {
            // Assuming T() creates a default value for the type T
            return T(); // or throw an exception
        }
        return queue_list.front();
    }

    T rear()
    {
        if (isEmpty())
        {
            // Assuming T() creates a default value for the type T
            return T(); // or throw an exception
        }
        return queue_list.back();
    }

    int size()
    {
        return queue_size;
    }

    void enqueue(const T &value)
    {
        queue_size++;
        queue_list.push_back(value);
    }

    T dequeue()
    {
        if (isEmpty())
        {
            // Assuming T() creates a default value for the type T
            return T(); // or throw an exception
        }
        T front = queue_list.front();
        queue_list.erase(queue_list.begin());
        queue_size--;
        return front;
    }
};

using namespace std;
MyQueue<int> ReverseK(MyQueue<int> queue, int k)
{

    // Replace this placeholder return statement with your code
    if (k < 0 || queue.isEmpty() || k > queue.size())
        return queue;

    int extra = k;
    MyStack<int> st;
    while (k > 0)
    {
        int val = queue.dequeue();
        st.push(val);
        k--;
    }

    MyQueue<int> ans;
    while (extra > 0)
    {
        int val1 = st.pop();
        ans.enqueue(val1);
        extra--;
    }

    while (queue.queue_size != 0)
    {
        int fin = queue.dequeue();
        ans.enqueue(fin);
    }

    return ans;
}

int main()
{
    std::vector<std::vector<int>> test_cases = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {-2, 1, -5, 45, 6, 3, -9},
        {1, 2, 5, 0, 7, 4, 23},
        {7, 3, 5, 6, 8, 12},
        {5, 67, 43, 23, 12, 56, 78, 98, 6, 21, 9}};

    std::vector<int> k_values = {4, 10, -7, 5, 2};

    for (int i = 0; i < test_cases.size(); ++i)
    {
        MyQueue<int> queue;
        for (auto item : test_cases[i])
        {
            queue.enqueue(item);
        }
        int k = k_values[i];
        std::cout << i + 1 << ".\tOriginal Queue: [";
        MyQueue<int> tempQueue = queue;
        while (!tempQueue.isEmpty())
        {
            std::cout << tempQueue.dequeue();
            if (!tempQueue.isEmpty())
            {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
        std::cout << "\tk value: " << k << std::endl;
        MyQueue<int> reversedQueue = ReverseK(queue, k);
        std::cout << "\tQueue after reversal: [";
        while (!reversedQueue.isEmpty())
        {
            std::cout << reversedQueue.dequeue();
            if (!reversedQueue.isEmpty())
            {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
        std::cout << std::string(100, '-') << "\n";
    }

    return 0;
}
