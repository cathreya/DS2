#include "account.h"

account::account(unsigned int id,double amt){
	accNo = id;
	accBal= amt;
	if(accBal<0){
		accBal=0.0;
	}
}

void account::deposit(double amt){
	if(amt>0){
		accBal+=amt;
	}
}

bool account::withdraw(double amt){
	if(amt<accBal){
		accBal-=amt;
		return true;
	}
	return false;
}


double account::getBalance(){
	return accBal;
}

unsigned int account::getId(){
	return accNo;
}


bool account::transfer(account &from, double amt){
	if(from.withdraw(amt)){
		accBal+=amt;
		return true;
	}
	return false;
}


account::account(account &from){
	accNo = from.getId();
	accBal = from.getBalance();	
}

bool transfer(account &from, account &to, double amt){
	if(from.withdraw(amt)){
		to.deposit(amt);
		return true;
	}
	return false;
}

