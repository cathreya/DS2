#include <iostream>
//#include "shape.h"
//#include "point.h"
//#include "circle.h"
#include "cylinder.h"
#include <math.h>
using namespace std;


double findVol(shape *ptr){
	return ptr->volume();
} 


int main(){
	shape *circlePtr,*cylPtr;
	circle circ(10);
	cylinder cyl(10,10);
	circlePtr = &circ;
	cylPtr = &cyl;
	
	circlePtr->displayShape();
	cylPtr->displayShape();
	//cout<<findVol(circlePtr)<<endl;
	cout<<findVol(cylPtr)<<endl;
 	

}
