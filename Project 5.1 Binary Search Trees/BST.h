#pragma once
#include "Node.h"
#include <iostream>
#include <stdexcept> 
using namespace std;
class BST
{
private:
	Node* root = nullptr;
	int numNodes = 0;

public:
	BST() = default;
	bool add(int number); //bst.insert(3) 
	bool remove(int number);// TODO: very hard
	int maximum();
	void inOrderTraversal();//prints tree in order
	bool find(int number);
	int size() const
	{
		return numNodes;
	}
private:
	Node* add(int number, Node* currNode);
	Node* maximum(Node*);
	void inOrderTraversal(Node* curr);
	Node* find(int number, Node* curr);
};

/*

Add	Insert the specified data into the BST by creating a new node.
Remove	Removes one node from the tree.
Maximum	Returns the maximum data / value stored in the BST.
InorderTraverse	Traverse the BST and print the contents of it to the screen inorder.
Find	Find the node that stores the data passed in.
*/