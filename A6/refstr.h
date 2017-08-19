#include <iostream>
using namespace std;
#include <string.h>
#ifndef REFSTR_H
#define REFSTR_H

class cell{
	public:
		friend class refstr;
	private:
		cell(const char *s){
			int len = strlen(s);
			count++;
			this->str = new char[len];
			for(int i=0;i<len;i++){
				this->str[i] = s[i];
			}	
		}
		unsigned int count;
		char *str;
		~cell(){
			delete[] str;
		}
};

class refstr{
	public:
		refstr(const char *str=""){
			ptr = new cell(str);
		}
		refstr(const refstr& s){
			s.ptr->count+=1;	
			this->ptr = s.ptr;
		}
		refstr& operator=(const refstr& s){
			if(s.ptr != NULL){
				this->ptr->count--;
				exterminate();
			}
			s.ptr->count+=1;	
			this->ptr = s.ptr;
		}
		void exterminate(){
			if(ptr->count == 0){
				delete ptr;
				ptr = NULL;
			}
		}
		
		int cmp(const refstr& s) const{
			return strcmp(this->ptr->str, s.ptr->str);
		}

		unsigned int getCount(){
			return this->ptr->count;
		}
		void display(){
			cout<<ptr->str;
		}
		~refstr(){
			ptr->count-=1;
			exterminate();
		}
			

	private: 
		cell *ptr;

};


#endif
