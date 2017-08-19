#include <iostream>
//#include "shape.h"
//#include "point.h"
#include "circle.h"
#include <math.h>

class cone:public circle{
	public:
		cone():circle(){
			this->height = 1;
			slantHeight = (int)sqrt(2);
		}
		cone(int r, int h):circle(r){
			this->height = h;
			this->slantHeight = (int)sqrt(r*r + h*h);
		}

		inline virtual double volume() const{
			return circle::area() * height /3; 
		}

		inline virtual double curvedSurfaceArea() const{
			return shape::PI * circle::radius * slantHeight;
		}

		inline virtual double totalSurfaceArea() const{
			return curvedSurfaceArea() + circle::area();
		}
		
		inline virtual void draw() const{
			cout<<"Radius: "<<circle::radius<<endl;
			cout<<"Height: "<<height<<endl;
		}
		inline virtual void displayShape() const{
			cout<<"Cone\n";
		}	
		

	private:
		int height, slantHeight;

};
