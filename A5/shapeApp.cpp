#include <iostream>
//#include "shape.h"
//#include "point.h"
//#include "circle.h"
#include "cone.h"
#include <math.h>
using namespace std;


double findVol(shape *ptr){
	return ptr->volume();
} 


int main(){
	shape *circlePtr,*conePtr;
	circle circ(10);
	cone cone1(10,10);
	circlePtr = &circ;
	conePtr = &cone1;
	
	circlePtr->displayShape();
	conePtr->displayShape();
	cout<<findVol(circlePtr)<<endl;
	cout<<findVol(conePtr)<<endl;
 	

}
