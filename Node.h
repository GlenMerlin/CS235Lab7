#pragma once
#include "NodeInterface.h"

struct Node : public NodeInterface{
            int data;
            Node *leftChild;
            Node *rightChild;
            Node(int data);
            virtual ~Node() override;
            int getData() const;
            NodeInterface * getLeftChild() const;
            NodeInterface * getRightChild() const;

};