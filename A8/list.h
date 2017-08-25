#include <iostream>
using namespace std;

template <class T>
class List{
	private:
		//List<T>::iterator1 find_address(T obj);
		class Node{
			T data;
			Node* next;
			Node* prev;
		}*front;
		unsigned size;
	public:
		List();
		void push_front(T obj);
		void push_back(T obj);
		void display();

		class iterator1{
			public:
				iterator1(){
					address = NULL;
				}
				iterator1(const List<T>::Node* a){
					address = a;
				}
				iterator1(const iterator1& from){
					address = from.address;
				}
				iterator1 operator=(const iterator1& from){
					address = from.address;
				}
				iterator1 operator++(){
					address++;
					return *this;
				}
				iterator1 operator++(int dummy){
					iterator1 tmp = *this;
					address++;
					return tmp;
				}
				iterator1& operator*(){
					return *address;
				}
				iterator1 begin() const{
					return address;
				}
			private:
				List<T>::Node* address;
		};
		
	

};