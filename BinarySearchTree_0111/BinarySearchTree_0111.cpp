#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    Node(string i, Node * 1, Node* r)
    {
        info = i;
        leftchild = 1;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node* ROOT;

    BinaryTree()
    {
        ROOT = NULL; 
    }

    void insert(string element)
    {
        Node* newNode = new Node(element, NULL, NULL);
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

