#include<iostream>
#include "vector.h"
using namespace std;

int main(){
	
	vector points[3];
	vector sides[3];
	float angles[3];
	
	points[0] = getVector();
	points[1] = getVector();
	points[2] = getVector();

	sides[0] = points[0].difference(points[1]);
	sides[1] = points[1].difference(points[2]);
	sides[2] = points[2].difference(points[0]);

	angles[0] = sides[0].angle(sides[1]);
	angles[1] = sides[1].angle(sides[2]);
	angles[2] = sides[2].angle(sides[0]);

	if(angles[0] == angles[1] || angles[1] == angles[2] || angles[0]==angles[2]){
		if(angles[0]==angles[1] && angles[1]==angles[2]){
			cout<<"Equilateral\n";
		}
		else{
			cout<<"Isoceles\n";
		}
	}
	else{
		cout<<"Scalene\n";
	}
}
