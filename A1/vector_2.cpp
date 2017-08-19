#include <iostream>
#include "vector_2.h"
#include <math.h>

using namespace std;

vector vector::difference(vector &a){
	vector tmp(x-a.getX(),y-a.getY());
	return tmp;
}

float vector::inner(vector &a){
	float ans =0;
	ans+= x*a.getX();
	ans+= y*a.getY();
	return ans;
}

bool vector::isPerpendicular(vector &a){
	float dot = inner(a);
	return dot==0;
}

void vector::display(){
	cout<<'('<<x<<','<<y<<')'<<endl;
}

float vector::mod(){
	return sqrt(x*x + y*y);
}

float vector::angle(vector &a){
	float ans = inner(a)/(mod()*a.mod());
	return ans;
}

bool vector::isParallel(vector &a){
	if(angle(a)==1){
		return true;
	}
	return false;
}

vector getVector(){
	float a,b;
	cout<<"Enter the X coordinate\n";
	cin>>a;
	cout<<"Enter the Y coordinate\n";
	cin>>b;
	vector tmp(a,b);
	return tmp;
}
