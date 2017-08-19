#include "account_2.h"

account::account(unsigned int id,double amt,char status, string own){
	accNo = id;
	accBal= amt;
	creditStatus = status;
	limitA=100000;limitB=10000;
	owner = own;
	if(accBal<0){
		accBal=0.0;
	}
}

void account::deposit(double amt){
	if(amt>0){
		accBal+=amt;
	}
}

void account::modifyCreditLimit(int limA,int limB){
	limitA = limA;
	limitB = limB;
}

bool account::withdraw(double amt){
	bool possible = false;
	if(amt<accBal){
		if(amt>=limitA){
			if(creditStatus == 'A'){
				possible=true;
			}
		}
		else if(amt>=limitB){
			if(creditStatus == 'A' || creditStatus == 'B'){
				possible=true;
			}
		}
		else{
			possible=true;
		}
	}
	
	if(possible){
		accBal-=amt;
		return true;
	}
	else{
		return false;
	}
}


double account::getBalance(){
	return accBal;
}

unsigned int account::getId(){
	return accNo;
}

char account::getCreditStatus(){
	return creditStatus;
}

void account::putCreditStatus(char status){
	creditStatus = status;
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
	creditStatus = from.getCreditStatus();
	limitA=100000;limitB=10000;
	owner = from.owner;
}

bool transfer(account &from, account &to, double amt){
	if(from.withdraw(amt)){
		to.deposit(amt);
		return true;
	}
	return false;
}

