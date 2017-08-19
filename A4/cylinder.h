#include <iostream>
//#include "shape.h"
//#include "point.h"
#include "circle.h"

class cylinder:public circle{
	public:
		cylinder():circle(),height(1){}
		cylinder(int radius,int height):circle(radius){
			this->height = height;
		}	

		virtual double volume() const{
			return circle::area() * height; 
		}

		virtual double curvedSurfaceArea() const{
			return shape::PI * circle::radius * 2 * height;
		}

		virtual double totalSurfaceArea() const{
			return curvedSurfaceArea() + 2*circle::area();
		}



		inline virtual void draw() const{
			cout<<"Radius: "<<circle::radius<<endl;
			cout<<"Height: "<<radius<<endl;
		}
		inline virtual void displayShape() const{
			cout<<"Cylinder\n";
		}
	private:
		int height;
};
