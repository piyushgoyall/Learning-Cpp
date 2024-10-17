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

class BinarySearchTree
{
private:
    Node *root;

public:
    BinarySearchTree();
    BinarySearchTree(int rootValue);
    Node *getRoot();
    Node *insert(Node *currentNode, int val);
    void insertBST(int val);
    bool Delete(Node *currentNode, int value);
    bool deleteBST(int value);
    void inOrderPrint(Node *currentNode);
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

Node *BinarySearchTree::insert(Node *currentNode, int val)
{
    if (currentNode == NULL)
    {
        return new Node(val);
    }
    else if (currentNode->value > val)
    {
        currentNode->leftChild = insert(currentNode->leftChild, val);
    }
    else
    {
        currentNode->rightChild = insert(currentNode->rightChild, val);
    }
    return currentNode;
}

void BinarySearchTree::insertBST(int value)
{
    if (getRoot() == NULL)
    {
        root = new Node(value);
        return;
    }
    insert(this->getRoot(), value);
}

bool BinarySearchTree::Delete(Node *currentNode, int value)
{
    if (root == NULL)
    {
        return false;
    }
    Node *parent; // To Store parent of currentNode
    while (currentNode != NULL && (currentNode->value != value))
    {
        parent = currentNode;
        if (currentNode->value > value)
            currentNode = currentNode->leftChild;
        else
            currentNode = currentNode->rightChild;
    }

    if (currentNode == NULL)
        return false;
    else if (currentNode->leftChild == NULL && currentNode->rightChild == NULL)
    {
        // 1. Node is Leaf Node
        // if that leaf node is the root (a tree with just root)
        if (root->value == currentNode->value)
        {
            delete root;
            root = NULL;
            return true;
        }
        else if (currentNode->value < parent->value)
        {
            delete parent->leftChild;
            parent->leftChild = NULL;
            return true;
        }
        else
        {
            delete parent->rightChild;
            parent->rightChild = NULL;
            return true;
        }
    }
    else if (currentNode->rightChild == NULL)
    {

        if (root->value == currentNode->value)
        {
            delete root;
            root = currentNode->leftChild;
            return true;
        }
        else if (currentNode->value < parent->value)
        {
            delete parent->leftChild;
            parent->leftChild = currentNode->leftChild;
            return true;
        }
        else
        {
            delete parent->rightChild;
            parent->rightChild = currentNode->leftChild;
            return true;
        }
    }
    else if (currentNode->leftChild == NULL)
    {

        if (root->value == currentNode->value)
        {
            delete root;
            root = currentNode->rightChild;
            return true;
        }
        else if (currentNode->value < parent->value)
        {
            delete parent->leftChild;
            parent->leftChild = currentNode->rightChild;
            return true;
        }
        else
        {
            delete parent->rightChild;
            parent->rightChild = currentNode->rightChild;
            return true;
        }
    }
    return false;
}

bool BinarySearchTree::deleteBST(int value)
{
    return Delete(root, value);
}

void BinarySearchTree::inOrderPrint(Node *currentNode)
{
    if (currentNode != NULL)
    {
        inOrderPrint(currentNode->leftChild);
        cout << currentNode->value << endl;
        inOrderPrint(currentNode->rightChild);
    }
}

int main()
{

    BinarySearchTree BST(13);

    BST.insertBST(4);
    BST.insertBST(7);
    BST.insertBST(16);
    BST.insertBST(19);
    BST.insertBST(3);
    BST.insertBST(1);
    BST.insertBST(9);
    BST.insertBST(2);
    BST.insertBST(5);
    BST.insertBST(15);

    cout << "InOrderTraversal" << endl;
    BST.inOrderPrint(BST.getRoot());

    cout << "Deleting 4" << endl;
    BST.deleteBST(4);

    cout << "BST After deleting 4" << endl;
    BST.inOrderPrint(BST.getRoot());

    return 0;
}