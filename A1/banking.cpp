#include <iostream>
#include "account.h"


using namespace std;

void display(account &a){
	cout<<"Account Id: "<<a.getId()<<endl;
	cout<<"Account Balance: "<<a.getBalance()<<endl;
	cout<<endl;
}

int main(){
	account ravi;
	cout<<"Ravi"<<endl;
	display(ravi);

	account mala(1234,50000.0);
	cout<<"Mala"<<endl;	
	display(mala);
	cout<<"Depositing\n";
	mala.deposit(700.0);

	cout<<"Mala"<<endl;
	display(mala);
	mala.withdraw(200.0);
	cout<<"Withdrawing\n";
	cout<<"Mala"<<endl;
	display(mala);
	
	account leela(mala);
	cout<<"Leela"<<endl;
	display(leela);

	leela.transfer(mala,200.0);
	cout<<"Transfering from Mala to Leela using Member Function\n";
	cout<<"Mala"<<endl;	
	display(mala);
	cout<<"Leela"<<endl;
	display(leela);

	transfer(mala,leela,200.0);
	cout<<"Transfering from Mala to Leela using Non-Member Function\n";
	cout<<"Mala"<<endl;	
	display(mala);
	cout<<"Leela"<<endl;
	display(leela);
	return 0;
}
