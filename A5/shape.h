#include <iostream>
using namespace std;
class shape{
	public:
		shape(){};
		virtual void draw() const= 0;
		virtual void displayShape() const= 0;
		virtual double volume() const = 0;
		virtual double area() const = 0;
		static const double PI = 3.14159265;
};
