// Project 5.1 Binary Search Trees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <cmath>
#include "BST.h"// already has Node.h
using namespace std; 

std::chrono::microseconds addRandomNumbers(int count);

int main()
{
    // inserting a bunch of elements
    cout << "100 elements took " << addRandomNumbers(100).count() << " microseconds\n";
    cout << "1000 elements took " << addRandomNumbers(1000).count() << " microseconds\n";
	cout << "10000 elements took " << addRandomNumbers(10000).count() << " microseconds\n";
	cout << "100000 elements took " << addRandomNumbers(100000).count() << " microseconds\n";

    return 0;
}

// times the insertion of N random integers
std::chrono::microseconds addRandomNumbers(int count) {
    auto start = chrono::system_clock::now();
    // make a BST and insert 'count' elements into the tree
    BST numberTree;
    while (numberTree.size() < count) {// makes sure we get 'count' in the tree
        numberTree.add(rand());
    }
    auto end = chrono::system_clock::now();
    return chrono::duration_cast<std::chrono::microseconds>(end - start);
}

