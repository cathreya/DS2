#include <iostream>
#include "freecheckingtask.h"

newFreeChecking::newFreeChecking():freeChecking(){}

newFreeChecking::newFreeChecking(unsigned id, double amount,char status,string name,bool f):freeChecking(id,amount,status,name,f){}

bool newFreeChecking::withdraw(double amt){
	if(freeChecking::withdraw(amt)){
		if(getFee()){
			collectFee();
		}
		return true;
	}
	return false;
}
