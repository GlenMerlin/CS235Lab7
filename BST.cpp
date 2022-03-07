#include "BST.h"
#include "Node.h"

BST::BST(){
	cout << "constructor" << endl;
	treeSize = 0;
}
BST:: ~BST(){
	cout << "destructor" << endl;
	clear();
}

bool BST::add(int data){
        if (root == NULL){
			Node *valToAdd = new Node(data);
			root = valToAdd;
			treeSize++;
			cout << "added: " << data << " to the tree!" << endl; 
			return true;
		}
		else {
			// search function
			// does the value already exist?
				// if yes break
			// insert left or right?
			// can't insert?
			cout << "root is not null, this functionality is currently not working" << endl;
			return false;
		}
};

bool BST::remove(int data){
	if (treeSize == 1){
		root = nullptr;
		treeSize--;
		cout << "removed: " << data << " from the tree!" << endl;
		return true;
	}
	else {
		if (!search(data)){
			cout << "This value doesn't exist in the tree" << endl;
		}
		else {
			for (int i = 0; 0 < searchSteps; i++){
				// remove the value
				cout << "searching and deleting data " << endl;
			}
		}
		
		cout << "removing more than one value is currently not supported" << endl;
		// change this to true later!
		return false;
	}
};

void BST::clear(){
	if (root == NULL){
		cout << "error, cannot clear an empty tree!" << endl;
		return;
	}
	else if (treeSize == 1){
		remove(root->data);
		return;
	}
	else {
		// for loop to check size
		cout << "failed to clear, this functionallity is currently not working" << endl;
	}
};

// Returns TRUE if the value is found
bool BST::search(int data){
	Node *currentNode = root;
	searchSteps = 0;
	if (treeSize == 1 && root->data == data){
		return true;
	}
	for (int i = 0; i < treeSize; i++){
		if (currentNode->data == data){
			return true;
		}
		else if (currentNode->data < data && currentNode->rightChild != nullptr){
			// go right
		}
		else if (currentNode->data > data && currentNode->leftChild != nullptr){
			// go left
		}

	}
	return false;
}

string BSTtoString() {
return "";
};

Node * BST::getRootNode() const{
return root;
};
