#include "pch.h"
#include "../Project 5.1 Binary Search Trees/BST.h"

TEST(BSTests, InsertDuplicate) {

	BST bst;
	// insert some nodes
	bool added = bst.add(5);
  EXPECT_TRUE(added);
  //bst.add(2);
  //bst.add(7);
  //bst.add(6);
  //EXPECT_FALSE(bst.add(2));// duplicate node
} 

/*
Be sure to include tests for attempting to remove a node from an empty BST, 
attempting to insert a duplicate node, removing a node with no children, 
removing a node with one child, and removing a node with two children. 
Be sure to verify the BST organization and structure are correct.
*/