#include <iostream>
#include "freechecking.h"

using namespace std;
int freeChecking::minBal = 10000;
int freeChecking::serviceFee = 100;

freeChecking::freeChecking():account(),fee(false){}


freeChecking::freeChecking(unsigned id, double amt, char status,string own1, bool f):account(id,amt,status,own1),fee(f){}


bool freeChecking::withdraw(double amt){

	if(account::withdraw(amt)){
		if(this->getBalance()<minBal){
			fee=true;
		}
		return true;
	}
	return false;
}

void freeChecking::setMinBal(int bal){
	freeChecking::minBal = bal;
}

void freeChecking::setServiceFee(int fee){
	freeChecking::serviceFee = fee;
}

bool freeChecking::collectFee(){
	if(fee){
		if(account::withdraw(serviceFee)){
			fee = false;
			return true;
		}
		return false;
	}
	return true;
}
