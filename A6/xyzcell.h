#include <iostream>
using namespace std;
#include "time.h"
#ifndef XYZCELL_H
#define XYZCELL_H

class cell{
	public:
		friend class refxyz;
	private:
		cell(const timet &s){
			count++;
			this->objptr= new timet(s);	
		}
		unsigned int count;
		timet *objptr;
		~cell(){
			delete objptr;
		}
};


class refxyz{
	public:
		refxyz(const timet &pt){
			this->ptr = new cell(pt);
		}
		refxyz(const refxyz& s){
			s.ptr->count+=1;	
			this->ptr = s.ptr;
		}
		refxyz& operator=(const refxyz& s){
			if(s.ptr != NULL){
				this->ptr->count--;
				exterminate();
			}
			s.ptr->count+=1;	
			this->ptr = s.ptr;
		}
		void exterminate(){
			if(ptr->count == 0){
				cout<<"Memory Cleared as count = 0\n";
				delete ptr;
				ptr = NULL;
			}
			else{
				cout<<"Memory not cleared as count: "<<ptr->count<<endl;
			}
		}
		unsigned int getCount(){
			return this->ptr->count;
		}
		void display(){
			cout<<ptr->objptr;
		}
		~refxyz(){
			ptr->count-=1;
			exterminate();
		}
			

	private: 
		cell *ptr;

};
#endif
