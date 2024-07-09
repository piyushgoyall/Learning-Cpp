#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *leftChild;
    Node *rightChild;
    Node();
    Node(int val);
};

Node::Node()
{
    value = 0;
    leftChild = NULL;
    rightChild = NULL;
}

Node::Node(int val)
{
    value = val;
    leftChild = NULL;
    rightChild = NULL;
}

class BinarySearchTree
{
private:
    Node *root;

public:
    BinarySearchTree();
    BinarySearchTree(int rootValue);
    Node *getRoot();
};

BinarySearchTree::BinarySearchTree()
{
    root = NULL;
}

BinarySearchTree::BinarySearchTree(int rootValue)
{
    root = new Node(rootValue);
}

Node *BinarySearchTree::getRoot()
{
    return root;
}

int main()
{
    BinarySearchTree BST(13);
    cout << "The root value of the Binary Search Tree is " << BST.getRoot()->value << endl;
    return 0;
}