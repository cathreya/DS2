#include <iostream>
#include "tree.h"
using namespace std;
int main(){
	BST givenTree;
	BST cloneTree;

	givenTree.insert(50);
	givenTree.insert(72);
	givenTree.insert(96);
	givenTree.insert(94);
	givenTree.insert(107);
	givenTree.insert(26);
	givenTree.insert(12);
	givenTree.insert(11);
	givenTree.insert(9);
	givenTree.insert(2);
	givenTree.insert(10);
	givenTree.insert(25);
	givenTree.insert(51);
	givenTree.insert(16);
	givenTree.insert(17);
	givenTree.insert(95);

	givenTree.inOrder();
	givenTree.preOrder();
	givenTree.postOrder();

	
}