#pragma once
#include "BSTInterface.h"
#include "NodeInterface.h"

using namespace std;

struct Node : public NodeInterface{
            int data;
            Node *leftChild;
            Node *rightChild;
            Node(int data): data(data) {};
            ~Node() override {};
            int getData() const;
            NodeInterface * getLeftChild() const;
            NodeInterface * getRightChild() const;

};

class BST : public BSTInterface {
    public:
        BST();
        ~BST();
        NodeInterface * getRootNode() const;
        bool add(int data);
        bool remove(int data);
        void clear();

        
    private:
        Node *root;
};
