#include <iostream>
using namespace std;

template <class T>
class List{
	public:
		List();
		void push_front(T obj);
		void push_back(T obj);
		void display();
	private:
	//	template <class T>
		List::Node* find_address(T obj);
		class Node{
			T data;
			Node* next;
			Node* prev;
		}*front;
		unsigned size;

};