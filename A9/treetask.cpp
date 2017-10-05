#include <iostream>
#include <queue>
#include "treetask.h"
using namespace std;

BST::BST(){
	root = NULL;
	size = 0;
}
void BST::insert(int n){
	if(root == NULL){
		root = new Node;
		root->data = n;
		root->left= new Node;
		root->right = new Node;
	}
	else{
		Node* tmp = root;
		while(tmp->data != INT_MAX){
		//	cout<<"GOOOOOOOO";
			if(n < tmp->data){
				tmp = tmp->left;
			}
			else{
				tmp = tmp->right;
			}
		}
		tmp->data = n;
		tmp->left = new Node;
		tmp->right = new Node;
	}
	size+=1;
}
Node* BST::search(int n){
	Node* tmp = root;
	while(tmp->data != INT_MAX){
		if(n == tmp->data){
			return tmp;
		}
		else if(n < tmp->data){
			tmp = tmp->left;
		}
		else{
			tmp = tmp->right;
		}
	}
	return NULL;
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
	if(tmp->data == INT_MAX){
		return;
	}
	else{
		inOrder(tmp->left);
		cout<<tmp->data<<" ";
		inOrder(tmp->right);
	}
}
void BST::preOrder(Node* tmp){
	if(tmp->data == INT_MAX){
		return;
	}
	else{
		cout<<tmp->data<<" ";
		preOrder(tmp->left);
		preOrder(tmp->right);
	}
}
void BST::postOrder(Node* tmp){
	if(tmp->data == INT_MAX){
		return;
	}
	else{
		postOrder(tmp->left);
		postOrder(tmp->right);
		cout<<tmp->data<<" ";
	}
}

void BST::levelOrder(){
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		Node* tmp = q.front();
		q.pop();
		if(tmp->data == INT_MAX){
			continue;
		}
		cout<<tmp->data<<" ";
		q.push(tmp->left);
		q.push(tmp->right);
	}
	cout<<'\n'; 
}

int BST::leafCount(){
	leafCount(root);
}

int BST::leafCount(Node* tmp){
	if(tmp->left == NULL || tmp->right == NULL){
		return 0;
	}
	if((tmp->left->data == INT_MAX) && (tmp->right->data == INT_MAX)){
		return 1;
	}
	else{
		return leafCount(tmp->left) + leafCount(tmp->right);
	}
}
