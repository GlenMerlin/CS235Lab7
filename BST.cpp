#include "BST.h"
#include "Node.h"

BST::BST(){
	cout << "constructor" << endl;
	root = NULL;
}
BST:: ~BST(){
	cout << "destructor" << endl;
	clear();
}

bool BST::add(int data){
		return updateData(root, data);
};

// action tells the function if we're adding or deleting!
bool BST::updateData(Node*& currentNode, int data){
	if (currentNode == NULL){
		currentNode = new Node(data);
		cout << "added: " << data << " to the tree!" << endl;
		return true;
	}
	else {
		if (data < currentNode->data){
			return updateData(currentNode->leftChild, data);
		}
		else if (data > currentNode->data) {
			return updateData(currentNode->rightChild, data);
		}
		else {
			return false;
		}
	}
}

bool BST::remove(int data){
		return deleteData(root, data);
	};


bool BST::deleteData(Node*& currentNode, int data){
	if (currentNode == NULL){
		cout << "value: " << data << " not found, failed to delete" << endl;
		return false;
	}
	else if (currentNode->data == data){
		if (currentNode->leftChild != nullptr && currentNode->rightChild != nullptr){
			// find the highest left value and replace it, then move the right child's pointer
			Node* largestChild = currentNode->leftChild;
			while (largestChild->rightChild != nullptr){
				largestChild = largestChild->rightChild;
			}
			currentNode->data = largestChild->data;
			deleteData(currentNode->leftChild, currentNode->data);
			return true;
		}
		else if (currentNode->leftChild != nullptr && currentNode->rightChild == nullptr){
			// find the highest left value and replace it
			Node* temp = currentNode->leftChild;
			delete currentNode;
			currentNode = temp;
			return true;
		}
		else if (currentNode->rightChild != nullptr && currentNode->leftChild == nullptr){
			// replace the current value with the right child
			Node* temp = currentNode->rightChild;
			delete currentNode;
			currentNode = temp;
			return true;
		}
		else if (currentNode->leftChild == nullptr && currentNode->rightChild == nullptr){
			delete currentNode;
			currentNode = NULL;
			return true;
		}
	}
	else {
		if (data < currentNode->data){
			return deleteData(currentNode->leftChild, data);
		}
		else if (data > currentNode->data){
			return deleteData(currentNode->rightChild, data);
		}
		else {
			return false;
		}
	}
	return false;
}

void BST::clear(){
	clearHelper(root);
};

void BST::clearHelper(Node*& currentNode){
	if (currentNode!=NULL){
		clearHelper(currentNode->leftChild);
		clearHelper(currentNode->rightChild);
		delete currentNode;
		currentNode = nullptr;
	}
}

Node * BST::getRootNode() const{
	return root;
};
