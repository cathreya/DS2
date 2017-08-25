#include <iostream>
#include "List.h"
using namespace std;

template <class T>
List<T>::List(){
	front = rear = NULL;
	size = 0;
}

template <class T>
void List<T>::push_back(T obj){
	Node* tmp = new Node;
	tmp->data = obj;
	tmp->next = NULL;
	if(rear == NULL){
		tmp->prev = NULL;
		front = rear = tmp;
	}
	else{
		tmp->prev = rear;
		rear->next = tmp;
		rear = tmp;
	}
	size+=1;
}

template <class T>
void List<T>::display(){
	Node* tmp = front;
	while(tmp != NULL){
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
	cout<<endl;
}