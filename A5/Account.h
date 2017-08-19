#include <iostream>
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account{
public:
	Account(unsigned id=0,double amount=0.0){
		acct_no = id;
		acct_bal = amount;
	}
	virtual void deposit(double amount);
	virtual bool withdraw(double amount);
	inline virtual unsigned get_id(){return acct_no;}
	inline virtual double get_bal(){return acct_bal;}
	virtual void display() const;
	virtual void show(){
		cout<<"Account Type: Account\n";
	}
protected:
	const static int SS_LEN = 12;
	unsigned acct_no;
	char ss[SS_LEN];
private:
	double acct_bal;
};
#endif

