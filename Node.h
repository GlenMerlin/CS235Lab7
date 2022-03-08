#pragma once
#include "NodeInterface.h"

class Node : public NodeInterface{
            friend class BST;
            public:
                Node(int data);
                virtual ~Node() override;
                int getData() const;
                NodeInterface * getLeftChild() const;
                NodeInterface * getRightChild() const;
            private:
                int data;
                Node *leftChild;
                Node *rightChild;
};