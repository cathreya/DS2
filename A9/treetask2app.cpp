#include <iostream>
#include "treetask2.h"

using namespace std;

int main(){
	BST bst;
	bst.insert(26);	
	bst.insert(6);
	bst.insert(894);
	bst.insert(14);

	bst.insert(789);
	bst.insert(50);
	bst.insert(258);

	bst.inOrderSeqNo();
	bst.levelOrder();	
}
