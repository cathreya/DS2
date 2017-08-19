#include <iostream>
#include "list.h"
using namespace std;

template <class T>
List<T>::List(){
	size = 0;
	front = NULL;
}

template <class T>
void List<T>::push_front(T obj){
	if(front == NULL){
		front = new Node;
		front -> data = obj;
		front ->next = front->prev = NULL;
	}
	else{
		Node* tmp = new Node;
		tmp->data = obj;
		tmp->next = front;
		tmp->prev = NULL;
		front->prev = tmp;
		front = tmp;
	}
}

template <class T>
void List<T>::push_back(T obj){
	if(front == NULL){
		front = new Node;
		front -> data = obj;
		front ->next = front->prev = NULL;
	}
	else{
		Node* tmp=front;
		while(tmp->next != NULL){
			tmp = tmp->next;
		}
		tmp->next = new Node;
		tmp->next->data = obj;
		tmp->next->prev = tmp;
		tmp->next->next = NULL;
	}
}

template <class T>
List<T>::Node* List<T>::find_address(T obj){
	Node* tmp;
	while(tmp != NULL){
		if(tmp->data == obj){
			return tmp;
		}
	}
	return NULL;
}

template <class T>
void List<T>::display(){
	Node* tmp;
	while(tmp!=NULL){
		cout<<tmp->data<<" ";
	}
	cout<<endl;
}