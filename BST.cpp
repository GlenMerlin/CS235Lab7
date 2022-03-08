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
			if (search(data)){
				cout << "can't add data because it already exists in the tree" << endl;
				return false;
			}
			else {
				return updateData(root, data, false);
			}
			return false;
		}
};

// action tells the function if we're adding or deleting! True=Delete, False=Add
bool BST::updateData(Node* currentNode, int data, bool action){
	
	if (currentNode->data < data && currentNode->leftChild != nullptr){
		return updateData(currentNode->leftChild, data, action);
	}
	else if (currentNode->data > data && currentNode->rightChild != nullptr) {
		return updateData(currentNode->rightChild, data, action);
	}
	if (currentNode->data < data && action == false){
		Node *valToAdd = new Node(data);
		currentNode->leftChild = valToAdd;
		treeSize++;
		return true;
	}
	else if (currentNode->data > data && action == false){
		Node *valToAdd = new Node(data);
		currentNode->rightChild = valToAdd;
		treeSize++;
		return true;
	}
	if (currentNode->data == data){
		// check if the current node has children
			// if there are no children delete it
			// if there are children perform a search to find the proper value to replace it with
		cout << "Deletion needs work!!!" << endl;
	}
	return false;
}

bool BST::remove(int data){
	bool success = 0;
	if (treeSize == 1){
		root = nullptr;
		treeSize--;
		cout << "removed: " << data << " from the tree!" << endl;
		return true;
	}
	else {
				success = updateData(root, data, true);
				if (success){
					cout << "successfully deleted!" << endl;
				}
				else {
					cout << "failed to delete the value" << endl;
				}
				cout << "searching and deleting data " << endl;
		}
		return success;
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
	// TODO non matching data
	while (currentNode != NULL){
		if (currentNode->data == data){
			return true;
		}
		else if (currentNode->data < data && currentNode->leftChild != nullptr){
			currentNode = currentNode->leftChild;
		}
		else if (currentNode->data > data && currentNode->rightChild != nullptr){
			currentNode = currentNode->rightChild;
		}
		else {
			return false;
		}

	}
	return false;
}

string BSTtoString() {
	// loop through, pump into string stream, then output
return "";
};

Node * BST::getRootNode() const{
return root;
};
