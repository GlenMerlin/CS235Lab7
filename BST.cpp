#include "BST.h"
#include "Node.h"

BST::BST(){
	cout << "constructor" << endl;
}
BST:: ~BST(){
	cout << "destructor" << endl;
}

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

Node * BST::getRootNode() const{
return NULL;
};