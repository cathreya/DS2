#include <iostream>
#include "Account.h"
using namespace std;

void Account::deposit(double amount){
	acct_bal+=amount;
}

bool Account::withdraw(double amount){
	if(acct_bal>=amount){
		acct_bal-=amount;
		return 1;
	}
	return 0;
}
void Account::display() const{
	cout<<"ID: "<<acct_no<<"\nBalance: Rs."<<acct_bal<<endl;
}
