#include "BST.h"
#include "Node.h"

BST::BST(){
	cout << "constructor" << endl;
	root = NULL;
}
BST:: ~BST(){
	cout << "destructor" << endl;
	// clear();
}

bool BST::add(int data){
		return updateData(root, data, false);
};

// action tells the function if we're adding or deleting! True=Delete, False=Add
bool BST::updateData(Node*& currentNode, int data, bool action){
	if (currentNode == NULL){
		currentNode = new Node(data);
		cout << "added: " << data << " to the tree!" << endl; 
		return true;
	}
	else {
		if (data < currentNode->data){
			return updateData(currentNode->leftChild, data, action);
		}
		else if (data > currentNode->data) {
			return updateData(currentNode->rightChild, data, action);
		}
		else {
			return false;
		}
	}
}

bool BST::remove(int data){
	// bool success = 0;
	// if (treeSize == 1){
	// 	root = nullptr;
	// 	treeSize--;
	// 	cout << "removed: " << data << " from the tree!" << endl;
	// 	return true;
	// }
	// else {
	// 			success = updateData(root, data, true);
	// 			if (success){
	// 				cout << "successfully deleted!" << endl;
	// 			}
	// 			else {
	// 				cout << "failed to delete the value" << endl;
	// 			}
	// 			cout << "searching and deleting data " << endl;
	// 	}
	// 	return success;
		return false;
	};

void BST::clear(){
	while (root != NULL){
		remove(root->data);
	}
};

Node * BST::getRootNode() const{
	return root;
};
