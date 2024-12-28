#include <bits/stdc++.h>
using namespace std;

class BinaryTree
{
private:
    vector<int> tree;
    int size;

public:
    BinaryTree(int maxSize)
    {
        size = 0;
        tree.resize(maxSize, -1);
    }

    void insert(int value)
    {
        if (size < tree.size())
        {
            tree[size++] = value;
        }
        else
        {
            cout << "Tree is full, cannot insert more elements.\n";
        }
    }

    void printAllTraversals()
    {
        vector<int> preOrder, inOrder, postOrder;
        stack<pair<int, int>> s;
        s.push({0, 0});

        while (!s.empty())
        {
            auto &[index, state] = s.top();

            if (index >= size || tree[index] == -1)
            {
                s.pop();
                continue;
            }

            if (state == 0)
            {
                preOrder.push_back(tree[index]);
                s.top().second++;
                int leftChild = 2 * index + 1;
                if (leftChild < size && tree[leftChild] != -1)
                {
                    s.push({leftChild, 0});
                }
            }
            else if (state == 1)
            {
                inOrder.push_back(tree[index]);
                s.top().second++;
                int rightChild = 2 * index + 2;
                if (rightChild < size && tree[rightChild] != -1)
                {
                    s.push({rightChild, 0});
                }
            }
            else
            {
                postOrder.push_back(tree[index]);
                s.pop();
            }
        }

        cout << "Preorder: ";
        for (int val : preOrder)
            cout << val << " ";
        cout << endl;

        cout << "Inorder: ";
        for (int val : inOrder)
            cout << val << " ";
        cout << endl;

        cout << "Postorder: ";
        for (int val : postOrder)
            cout << val << " ";
        cout << endl;
    }
};

int main()
{
    int maxSize;

    cout << "Enter the maximum size of the binary tree: ";
    cin >> maxSize;

    BinaryTree tree(maxSize);

    cout << "Enter " << maxSize << " elements (-1 for empty nodes):\n";
    for (int i = 0; i < maxSize; i++)
    {
        int value;
        cin >> value;
        tree.insert(value);
    }

    tree.printAllTraversals();
    return 0;
}
