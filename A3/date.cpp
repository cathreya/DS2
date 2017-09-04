#include <iostream>
#include "date.h"
using namespace std;
const int daysOfMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

date::date(int d,int m, int y){
	day = 1;
	month = 1;
	year = 1990;
	if(m==2 && year%4==0){
		if(d<=29){
			day = d;
		}
	}
	else{
		if(d<=daysOfMonth[m]){
			day = d;
		}
	}
	if(m <= 12){
		month = m;
	}
	if(y < 9999){
		year = y;
	}
}

void date::display(){
	cout<<day<<'/'<<month<<'/'<<year<<endl;
}

void date::operator()(int m){
	if(month + m > 12){
		month = ((month+m)%12)+1;
		year+=1;
	}
	else{
		month+=m;
	}
}

