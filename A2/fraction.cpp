#include <iostream>
#include "fraction.h"

int findGcd(int a, int b){
	if(a%b==0){
		return b;
	}
	else{
		return findGcd(b,a%b);
	}
}

fraction::fraction(int n, int d){
	int gcd = findGcd(abs(n),abs(d));
	num = n/gcd;
	denom = d/gcd;
	if((n>0 && d<0) || (n<0 && d>0)){
		num*=-1;
	}
}

inline void fraction::display(){
	cout<<num<<"\/"<<denom<<endl;
}

int fraction::getOneFrac(){
	return oneFrac;
}

int fraction::getZeroFrac(){
	return zeroFrac;
}

int fraction::floor(){
	if(num>=0){
		return num/denom;	
	}
	else if(this.isInt()){
		return num;
	}
	else{
		return (num/denom)-1;
	}
}

int fraction::ceiling(){
	if(this.isInt()){
		return num;
	}
	else
	return (num/denom)+1;
}

int fraction::compare(int i){
	if(this.isInt()){
		if(i == num){
			return 0;
		}
	}
	else{
		if((float)num/denom > i){
			return 1
		}
		else{
			return -1;
		}
	}
}

int compare(int i, fraction r){
	if(r.isInt()){
		if(r.num == i){
			return 0;
		}
	}
	else{
		if((float)r.num/r.denom > i){
			return -1;
		}
		else{
			return 1;
		}
	}
}

int compare(fraction r, int i){
	if(r.isInt()){
		if(r.num == i){
			return 0;
		}
	}
	else{
		if((float)r.num/r.denom > i){
			return 1;
		}
		else{
			return -1;
		}
	}
}

int compare(int i,int r){
	if(i==r){
		return 0;
	}
	else if(i>r){
		return 1;
	}
	else{
		return -1;
	}
}
