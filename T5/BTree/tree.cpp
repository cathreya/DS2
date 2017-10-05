#include <iostream>
#include <queue>
#include "tree.h"
using namespace std;

BT::BT(){
	root = NULL;
	size = 0;
}
void BT::insert(int n){
	if(root == NULL){
		root = new Node;
		root->data = n;
		root->left= new Node;
		root->right = new Node;
	}
	else{
		Node* tmp = root;
		while(tmp->data != INT_MAX){
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

void BT::inOrder(){
	inOrder(root);
	cout<<'\n';
}
void BT::preOrder(){
	preOrder(root);
	cout<<'\n';
}
void BT::postOrder(){
	postOrder(root);
	cout<<'\n';
}

void BT::inOrder(Node* tmp, int cnt){
	if(tmp->data == INT_MAX){
		return;
	}
	else{
		inOrder(tmp->left);
		cnt++;
		visit(tmp,cnt,2)
		inOrder(tmp->right);
	}
}
void BT::preOrder(Node* tmp, int cnt){
	if(tmp->data == INT_MAX){
		return;
	}
	else{
		cnt++;
		visit(tmp,cnt,1)
		preOrder(tmp->left);
		preOrder(tmp->right);
	}
}
void BT::postOrder(Node* tmp, int cnt){
	if(tmp->data == INT_MAX){
		return;
	}
	else{
		postOrder(tmp->left);
		postOrder(tmp->right);
		cnt++;
		visit(tmp,cnt,3)
	}
}

void BT::levelOrder(){
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

void BT::visit(Node* tmp, int n, int order){
	if(order==1){
		tmp->pre = n;
	} 
	else if(order == 2){
		tmp->in = n;
	}
	else{
		tmp->post = n;
	}
	cout<<tmp->data<<" : "<<n;
}

// void BT::makeCopy(Node* dest, Node* tmp){
// 	if(tmp->data != INT_MAX){
// 		dest = new Node;
// 		dest->data = tmp->data;
// 		makeCopy(dest->left,tmp->left);
// 		makeCopy(dest->right,tmp->right);
// 	}
// }

// void BT::makeCopy(BT* clone){
// 	makeCopy(clone->root,root);
// }