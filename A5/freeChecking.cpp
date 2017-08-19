#include <iostream>
#include "freeChecking.h"
using namespace std;

double freeChecking::serviceFee = 200;
double freeChecking::minBal = 500;

bool freeChecking::withdraw(double amt){
	if(Account::withdraw(amt)){
		if(get_bal()<minBal)
			free = 0;
		return 1;
	}
	return 0;
}
void freeChecking::fee(){
	if(free==0)
	{
		if(get_bal()>=serviceFee){
			withdraw(serviceFee);	
			cout<<"Service Fee Deducted\n";
		}
		else
		{
			cout<<"Insufficient Funds in Account\nAccount Balance deducted to 0\n";
			if(Account::withdraw(get_bal()));
		}
	}
}
