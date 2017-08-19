#include <iostream>
#include "jointAccout.h"
#include "freeChecking.h"
using namespace std;



bool transfer(Account *a1,Account *a2,double amt){
	if(a1->withdraw(amt))	{
		a2->deposit(amt);
		return 1;
	}
	return 0;
}

int main(){
	Account *jA,*fcA;
	jointAccount j(1000,500.00,"A","B");
	freeChecking fc(1001,750.00);
	jA = &j;
	fcA = &fc;
	jA->show();
	jA->display();

	cout<<'\n';
	fcA->show();
	fcA->display();

	if(transfer(jA,fcA,250)){
		cout<<"\nTransfer Successful\n\n";
	}
	else{
		cout<<"Transfer Unsuccessful\n";
	}
	jA->show();
	jA->display();

	cout<<'\n';
	fcA->show();
	fcA->display();
}
