#include <cstddef>
#include <iostream>
#include <stdlib.h>
#include<climits>


#ifndef BST_H
#define BST_H
class Node{
	private:	
		int data;
		Node* left;
		Node* right;
		int inOrderNo;
		//friend class BST;
	public:
		Node(){
			left = right = NULL;
			data = INT_MAX;
		}
		inline int getInOrder(){
			return inOrderNo;
		}
		inline void setInOrder(int i){
			inOrderNo = i;
		}
		inline int getData(){
			return data;
		}
		inline Node* getLeft(){
			return left;
		}
		inline Node* getRight(){
			return right;
		}
		inline void setData(int n){
			data = n;
		}
		inline void setLeft(Node* n){
			left = n;
		}
		inline void setRight(Node* n){
			right = n;
		}

};

class BST{
	public:
		BST();
		void insert(int n);
		Node* search(int n);
		void inOrder();
		void preOrder();
		void postOrder();
		inline int getSize(){
			return size;
		}		
		void levelOrder();
		int leafCount();
		void inOrderSeqNo();

	
	private:
		Node* root;
		int size;
		void inOrder(Node* tmp);
		void preOrder(Node* tmp);
		void postOrder(Node* tmp);
		int leafCount(Node* tmp);
		void inOrderSeqNo(Node* tmp, int& cnt);
	
};
#endif
