#include <iostrem>
#include "date.h"

const int date::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

date::date(int d, int m, int y){
	setDate(m,d,y);
}

void date::setDate(int d,int m,int y){
	if(1<=m && m<=12){
		month = m;
	}
	else{
		month = 1;
	}

	if(1900<=y && y<10000){
		year = y;
	}
	else {
		year = 1900;
	}
	if(month == 2 && leapYear(year)){
		if(1<=d && d<=29){
			day = d;
		}
		else{
			day = 1;
		}
	}
	else{
		if(1<=d && d<=days[month]){
			day = d;
		}
		else{
			day = 1;
		}
	}
}

date& date::operator++(){
	increment();
	return this;
}

date date::operator++(int){
	date temp = *this;
	increment();
	return temp;
}

const date& date::operator+=(int additionalDays){
	for(int i=0;i<additionalDays;i++){
		increment();
	}
	return this;
}

bool Date::leapYear( int y ) const{
	if ( y % 400 == 0 || ( y % 100 != 0 && y % 4 == 0 ) ){
		return true;
	}
	else{
		return false; 
	}
}

bool Date::endOfMonth( int d ) const{
	if ( month == 2 && leapYear( year ) ){
		return d == 29; // last day of Feb. in leap year
	}
	else{
		return d == days[ month ];
	}
} 

void date::increment(){
	if(endOfMonth(day) && month==12){
		day = 1;
		month = 1;
		year++;
	}
	else if(endOfMonth(day)){
		day = 1;
		month++;
	}
	else{
		day++;
	}
}


