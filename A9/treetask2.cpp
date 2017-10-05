#include <iostream>
#include <queue>
#include "treetask2.h"
using namespace std;

BST::BST(){
	root = NULL;
	size = 0;
}
void BST::insert(int n){
	if(root == NULL){
		root = new Node;
		root->setData(n);
		Node* tmpL = new Node;
		Node* tmpR = new Node;		
	
		root->setLeft(tmpL);
		root->setRight(tmpR);
	}
	else{
		Node* tmp = root;
		while(tmp->getData() != INT_MAX){
		//	cout<<"GOOOOOOOO";
			if(n < tmp->getData()){
				tmp = tmp->getLeft();
			}
			else{
				tmp = tmp->getRight();
			}
		}
		tmp->setData(n);

		Node* tmpL = new Node;
		Node* tmpR = new Node;

		tmp->setLeft(tmpL);
		tmp->setRight(tmpR);		
	}
	size+=1;
}
Node* BST::search(int n){
	Node* tmp = root;
	while(tmp->getData() != INT_MAX){
		if(n == tmp->getData()){
			return tmp;
		}
		else if(n < tmp->getData()){
			tmp = tmp->getLeft();
		}
		else{
			tmp = tmp->getRight();
		}
	}
	return NULL;
}

void BST::inOrderSeqNo(){
	int temp = 1;
	inOrderSeqNo(root,temp);
}

void BST::inOrderSeqNo(Node* tmp, int& cnt){
	if(tmp->getData() == INT_MAX){
		return;
	}
	else{
		inOrderSeqNo(tmp->getLeft(),cnt);
		tmp->setInOrder(cnt++);
		inOrderSeqNo(tmp->getRight(),cnt);
	}
}

void BST::inOrder(){
	inOrder(root);
	cout<<'\n';
}
void BST::preOrder(){
	preOrder(root);
	cout<<'\n';
}
void BST::postOrder(){
	postOrder(root);
	cout<<'\n';
}

void BST::inOrder(Node* tmp){
	if(tmp->getData() == INT_MAX){
		return;
	}
	else{
		inOrder(tmp->getLeft());
		cout<<tmp->getData()<<" ";
		inOrder(tmp->getRight());
	}
}
void BST::preOrder(Node* tmp){
	if(tmp->getData() == INT_MAX){
		return;
	}
	else{
		cout<<tmp->getData()<<" ";
		preOrder(tmp->getLeft());
		preOrder(tmp->getRight());
	}
}
void BST::postOrder(Node* tmp){
	if(tmp->getData() == INT_MAX){
		return;
	}
	else{
		postOrder(tmp->getLeft());
		postOrder(tmp->getRight());
		cout<<tmp->getData()<<" ";
	}
}

void BST::levelOrder(){
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		Node* tmp = q.front();
		q.pop();
		if(tmp->getData() == INT_MAX){
			continue;
		}
		cout<<tmp->getData()<<" Inorder No: "<<tmp->getInOrder()<<endl;
		q.push(tmp->getLeft());
		q.push(tmp->getRight());
	}
	cout<<'\n'; 
}

int BST::leafCount(){
	leafCount(root);
}

int BST::leafCount(Node* tmp){
	if(tmp->getLeft() == NULL || tmp->getRight() == NULL){
		return 0;
	}
	if((tmp->getLeft()->getData() == INT_MAX) && (tmp->getRight()->getData() == INT_MAX)){
		return 1;
	}
	else{
		return leafCount(tmp->getLeft()) + leafCount(tmp->getRight());
	}
}
