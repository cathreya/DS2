#include <climits>
#include <iostream>
#include <stdlib.h>


#ifndef BST_H
#define BST_H
class Node{
	private:	
		int data;
		Node(){
			left = right = NULL;
			data = INT_MAX;
		}
		Node* left;
		Node* right;
		friend class BST;
	public:
		inline int getData(){
			return data;
		}
};

class BST{
	private:
		Node* root;
		int size;
		void inOrder(Node* tmp);
		void preOrder(Node* tmp);
		void postOrder(Node* tmp);

	public:
		BST();
		void insert(int n);
		Node* search(int n);
		void inOrder();
		void preOrder();
		void postOrder();
		void makeCopy(BST* clone);
		inline int getSize(){
			return size;
		}		
		void levelOrder();
};
#endif
