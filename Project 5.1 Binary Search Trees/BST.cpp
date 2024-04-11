#include "BST.h"

// public insert that user calls
bool BST::add(int number)
{
	// if the tree is empty, our root is nullptr
	if(root == nullptr){
		root = new Node(number); 
	} else {
		Node* insertedNode = add(number, root);
		if(nullptr == insertedNode){
			return false;// insert failed because fo duplicate value
		} 
	}
    this->numNodes++;
	return true;
}

// private version which has access to the 'guts' of the class
Node* BST::add(int number, Node* currNode)
{
	if(currNode == nullptr){
		return new Node(number);
	} else{
		// current node not null so have to decide to go left, right, or if =
		if(number < currNode->data){
			currNode->left = add(number, currNode->left);// go left
		} else if(currNode->data < number){
			currNode->right = add(number, currNode->right);// go right
		}  
		// equal case just doesn't do anything / doesn't change currNode or its children
		return currNode;
	}
} 

//TODO: remove public
//TODO: remove version private



int BST::maximum(){
	Node* maxNode = maximum(root);// start at root and find rightmost

	if(maxNode == nullptr){// throw an error: you shouldn't call max on an empty tree
		throw std::logic_error("don't call max on an empty tree");
	} else{
		return maxNode->data;
	}

	// maxNode is valid and has our max number inside of it
}

Node* BST::maximum(Node* currNode){
	// going as far right as it can 
	if (currNode == nullptr) {
		return nullptr;// this is the 'error' case; couldn't find a max
	}
	else if (currNode->right != nullptr){
		return maximum(currNode->right);// keep going right
	} else{ 
		return currNode;// no right to go to
	}
}

void BST::inOrderTraversal()//prints tree in order 
{
	// if the tree is empty what do we do? probabll print a message
	if(root == nullptr){
		std::cout << "Tree is empty.\n";
	} else{
		inOrderTraversal(root);
	}
} 

void BST::inOrderTraversal(Node* curr){
	if(curr == nullptr){
		return;
	} else{
		inOrderTraversal(curr->left);// go left
		cout << curr->data << ' ';// print node
		inOrderTraversal(curr->right);// go right
	}
}

// bool found7 = bst.find(7);
bool BST::find(int number){
	// if the tree is empty, our root is nullptr
	if (root == nullptr) {
		return false;// fail because no nodes in tree
	}
	else {
		Node* node = find(number, root);
		if (nullptr == node) {
			return false;// insert failed because value dne
		}
		return true;
	}
}

Node* BST::find(int number, Node* currNode){
	if (currNode == nullptr) {
		return nullptr;
	}
	else {
		// current node not null so have to decide to go left, right, or if =
		if (number < currNode->data) {
			return find(number, currNode->left);// go left
		} else if (currNode->data < number) {
			return find(number, currNode->right);// go right
		} else if (currNode->data == number) { // EQUAL! we found the number
			return currNode;
		}
		return nullptr;
	}
}


