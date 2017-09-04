#ifndef LIST_H
#define LIST_H
template <class T>
class List{
	private:
		class Node{
			friend class List;
			private:
				T data;
				Node* next;
				Node* prev;
		}*front,*rear;
		unsigned int size;
		
		Node* find(T obj){
			Node* tmp = front->next;
			while(tmp != NULL){
				if(tmp->data == obj){
					return tmp;
				}
				tmp=tmp->next;
			}
			return NULL;
		}

		void del(Node* tmp){
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			delete tmp;
			size-=1;
		}
	public:
		List(){
			front = new Node;
			rear = new Node;
			front->next = rear;
			front->prev = NULL;
			
			rear->next = NULL;
			rear->prev = front;
			size = 0;
		}
		void push_back(T obj){
			Node* tmp = new Node;
			tmp->data = obj;
			tmp->next = rear;
			tmp->prev = rear->prev;
			rear->prev->next = tmp;
			rear->prev = tmp;
		
			size+=1;
		}
		void push_front(T obj){
			Node* tmp = new Node;
			tmp->data = obj;
			tmp->prev = front;
			
			tmp->next = front->next;
			front->next->prev = tmp;
			front->next = tmp;
			
			size+=1;	
		}
		void push_after(T obj, T dat){
			Node* location = find(obj);
			if(location == NULL){
				return;
			}
			Node* tmp = new Node;
			tmp->data = dat;
			tmp->prev = location;
			tmp->next = location->next;
			location->next->prev = tmp;
			location->next=tmp;
			size+=1;
		}

		void remove(T obj){
			Node* tmp = find(obj);
			if(tmp==NULL){
				return;
			}
			del(tmp);
		}

		void remove_n(int n){
			Node* tmp = front->next;
			while(n-- && size>0){
				del(tmp);
				tmp = tmp->next;
			}
		}
		void display(){
			Node* tmp = front->next;
			while(tmp != rear){
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
			cout<<endl;
		}

};
#endif
