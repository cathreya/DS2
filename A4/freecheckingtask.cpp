#include <iostream>
#include "freecheckingtask.h"

newFreeChecking::newFreeChecking():freeChecking(){}

newFreeChecking::newFreeChecking(unsigned id, double amount,char status,bool f):freeChecking(id,amount,status,f){}

bool newFreeChecking::withdraw(double amt){
	if(freeChecking::withdraw(amt)){
		if(getFee()){
			collectFee();
		}
		return true;
	}
	return false;
}
