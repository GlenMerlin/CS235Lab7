#include "BST.h"

bool BST :: add(int data){
        cout << "add"<<endl;
	    Node *ptr = new Node(data);
	    ptr->leftChild = NULL; // To test that the friend relationship works
	    NodeInterface *rval = ptr->getLeftChild();
	    long value = (long)rval;
	    cout << "Added "<<value<<endl;
	    root = ptr;
        return 0;
};

bool BST :: remove(int data){
return 0;
};

void BST :: clear(){

};

string BSTtoString() {
return "";
};

NodeInterface * Node :: getLeftChild()const {
    return leftChild;
};
NodeInterface * Node :: getRightChild()const {
    return rightChild;
};