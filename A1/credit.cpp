#include<iostream>
#include "account_2.h"
using namespace std;

void display(account &a){
	cout<<"Account Id: "<<a.getId()<<endl;
	cout<<"Account Balance: "<<a.getBalance()<<endl;
	cout<<endl;
}


int main(){
	account raju(1201,1000000,'A');
	
	display(raju);
	cout<<"Withdrawing 200000\n";
	raju.withdraw(200000);
	display(raju);
	cout<<"Changing status to B\n";
	raju.putCreditStatus('B');
	cout<<"Withdrawing 200000\n";
	display(raju);
	cout<<"Withdrawing 20000\n";
	raju.withdraw(20000);
	display(raju);
	cout<<"Changing status to C\n";
	raju.putCreditStatus('C');
	cout<<"Withdrawing 200000\n";
	display(raju);
	cout<<"Withdrawing 20000\n";
	raju.withdraw(20000);
	display(raju);
	cout<<"Withdrawing 200\n";
	raju.withdraw(200);
	display(raju);
}
