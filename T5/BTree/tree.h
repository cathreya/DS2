#include <climits>
#include <iostream>
#include <stdlib.h>


#ifndef BT_H
#define BT_H
class Node{
	private:	
		int data;
		Node(){
			left = right = NULL;
			data = INT_MAX;
		}
		int pre;
		int in;
		int post;
		Node* left;
		Node* right;
		friend class BT;
	public:
		inline int getData(){
			return data;
		}
};

class BT{
	private:
		Node* root;
		int size;
		void inOrder(Node* tmp, int cnt);
		void preOrder(Node* tmp, int cnt);
		void postOrder(Node* tmp, int cnt);

	public:
		BT();
		void insert(int n);
		void inOrder();
		void preOrder();
		void postOrder();
		void makeCopy(BT* clone);
		void makeCopy(Node* a, Node* b);
		void visit(Node* tmp, int n, int order);
		inline int getSize(){
			return size;
		}		
		void levelOrder();
};
#endif
