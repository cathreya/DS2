#include <iostream> 
#include "shape.h"
using namespace std;
class rectangle:public shape{
	public:
		rectangle(){
			this->length = 1;
			this->breadth = 1;
		}
		rectangle(int length, int breadth){
			this->length = length;
			this->breadth = breadth;
		}
		inline virtual void draw(){
			cout<<"Length: "<<length<<endl;
			cout<<"Breadth: "<<breadth<<endl;
		}
		inline virtual void displayShape(){
			cout<<"Rectangle \n";
		}
	private:
		int length,breadth;
};
