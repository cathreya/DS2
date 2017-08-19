#include <iostream>
#include "fraction.h"
using namespace std;

int fraction::oneFrac = 0;
int fraction::zeroFrac = 0;

int fraction::findGcd(int a, int b) const{
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
	if(isOne()){
		incrementOne();
	}
	if(isZero()){
		incrementZero();
	}
}

void fraction::incrementOne(){
	fraction::oneFrac+=1;
}

void fraction::incrementZero(){
	fraction::zeroFrac+=1;
}

void fraction::decrementOne(){
	fraction::oneFrac-=1;
}

void fraction::decrementZero(){
	fraction::zeroFrac-=1;
}



int fraction::getOneFrac(){
	return fraction::oneFrac;
}

int fraction::getZeroFrac(){
	return fraction::zeroFrac;
}


int fraction::floor()const{
	if(num>=0){
		return num/denom;	
	}
	else if(isInt()){
		return num;
	}
	else{
		return (num/denom)-1;
	}
}

int fraction::ceiling()const{
	if(isInt()){
		return num;
	}
	else
	return (num/denom)+1;
}

int fraction::compare(int i)const{
	if(isInt()){
		if(i == num){
			return 0;
		}
	}
	else{
		if((float)num/denom > i){
			return 1;
		}
		else{
			return -1;
		}
	}
}
/*
int compare(int i, fraction r){
	cout<<"comparing int and fraction by value\n";
	if(r.num == i){
		return 0;
	}
	if(r.num/r.denom > i){
		return -1;
	}
	else{
		return 1;
	}	
}
*/

int compare(int* i, fraction* r){
	cout<<"comparing int and fraction by pointer\n";
	if(r->num == *i){
		return 0;
	}
	if(r->num/r->denom > *i){
		return -1;
	}
	else{
		return 1;
	}
}
int compare(int& i, fraction& r){
	cout<<"comparing int and fraction by reference\n";
	if(r.num == i){
		return 0;
	}
	if(r.num/r.denom > i){
		return -1;
	}
	else{
		return 1;
	}
}
/*
int compare(fraction r, int i){
	cout<<"comparing fraction and int by value\n";
	if(r.num/r.denom == i){
		return 0;
	}
	else if(r.num/r.denom > i){
		return 1;
	}

	else{
		return -1;
	}
}
*/

int compare(fraction* r, int* i){
	cout<<"comparing fraction and int by pointer\n";
	if(r->num/r->denom == *i){
		return 0;
	}
	else if(r->num/r->denom > *i){
		return 1;
	}

	else{
		return -1;
	}
}

int compare(fraction& r, int& i){
	cout<<"comparing fraction and int by reference\n";
	if(r.num/r.denom == i){
		return 0;
	}
	else if(r.num/r.denom > i){
		return 1;
	}

	else{
		return -1;
	}
}

int compare(int i,int r){
	cout<<"Comparing two ints by value\n";
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

int compare(int* i,int* r){
	cout<<"Comparing two ints by pointers\n";
	if(*i==*r){
		return 0;
	}
	else if(*i>*r){
		return 1;
	}
	else{
		return -1;
	}
}

int compare(int& i,int& r){
	cout<<"Comparing two ints by reference\n";
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


fraction::~fraction(){
	if(isOne()){
		decrementOne();
	}
	if(isZero()){
		decrementZero();
	}
}
