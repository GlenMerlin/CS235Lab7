#include "Node.h"
using namespace std;

Node::Node(int data): data(data) {};
Node::~Node(){};

int Node::getData() const{
return data;
};

NodeInterface * Node::getLeftChild() const{
return NULL;
};

NodeInterface * Node::getRightChild() const{
return NULL;
};