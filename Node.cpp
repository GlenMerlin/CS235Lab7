#include "Node.h"
using namespace std;

Node::Node(int data): data(data) {
    leftChild = NULL;
    rightChild = NULL;
};
Node::~Node(){};

int Node::getData() const{
return data;
};

NodeInterface * Node::getLeftChild() const{
return leftChild;
};

NodeInterface * Node::getRightChild() const{
return rightChild;
};