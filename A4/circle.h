#include <iostream>
//#include "shape.h"
#include "point.h"

using namespace std;

class circle:public point{
	public:	
		circle():point(),radius(1){};
		circle(int radius):point(){
			this->radius = radius;
		}	

		double virtual area() const{
			return shape::PI * radius * radius;
		}
		inline virtual void draw() const{
			cout<<"Radius: "<<radius<<endl;
		}
		inline virtual void displayShape() const{
			cout<<"Circle \n";
		}
		inline virtual double volume() const{
			return 0;
		}

	protected:
		int radius;
};
