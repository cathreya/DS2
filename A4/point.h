#include <iostream>
#include "shape.h"
using namespace std;
class point:public shape{
	public:
		point(){
			this->X = 0;
			this->Y = 0;
		}
		point(int x, int y){
			this->X = x;
			this->Y = y;
		}
		inline void setXY(int x, int y){
			this->X = x;
			this->Y = y;
		}
		inline int getX(){
			return X;
		}
		inline int getY(){
			return Y;
		}
		inline virtual void displayShape(){
			cout<<"Point\n";
		}
		inline virtual	void draw(){
			cout<<"X: "<<X<<" Y: "<<Y<<endl;
		}
		inline virtual double area() const{
			return 0;
		}
		inline virtual double volume() const{
			return 0;
		}
	
	protected:
		int X,Y;

};
