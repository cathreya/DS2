#include<iostream>
#include "Account.h"
using namespace std;

class freeChecking:public Account{
	static double minBal;
	static double serviceFee;
	bool free;
public:
	freeChecking():Account(),free(1){};
	freeChecking(int id,double bal):Account(id,bal),free(1){};
	virtual void show(){cout<<"Account Type: Free Checking\n";}
	virtual bool withdraw(double amt);
	void fee();
};

