#include <iostream>
#include "tree.h"

using namespace std;

int main(){
	BST bst;
	bst.insert(4);	
	bst.insert(2);
	bst.insert(7);
	bst.insert(1);

	bst.insert(3);
	bst.insert(5);
	bst.insert(6);

	bst.inOrder();
	bst.preOrder();
	bst.postOrder();
	cout<<bst.getSize()<<endl;
	bst.levelOrder();
	if(bst.search(3)!= NULL){
		cout<<"Found\n";
	}
	else{
		cout<<"Not Found\n";
	}

	if(bst.search(30)!= NULL){
		cout<<"Found\n";
	}
	else{
		cout<<"Not Found\n";
	}
}
