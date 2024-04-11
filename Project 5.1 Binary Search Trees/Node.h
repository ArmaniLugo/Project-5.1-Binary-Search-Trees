#pragma once

struct Node;

struct Node
{ 
	// data members set up by the ctor
	int data;
	Node* left;
	Node* right;

	// ctor: function to set up a node 
	// has default arguments so we can made a node like n(0)
	Node(int d,Node* l = nullptr, Node* r = nullptr){
		data = d;
		left = l;
		right = r;
	}
};

// Node n(1)

