#include <iostream>
#include "freechecking.h"
using namespace std;

int main(){
	freeChecking a(10,10000.40,'A',"Raju",false);
	cout<<"Min Balance is: "<<a.getMinBal()<<" Service Fee is: "<<a.getServiceFee()<<endl;
	cout<<"Current Balance:"<<a.getBalance()<<endl;
	cout<<"Withdrawing 9900"<<endl;
	a.withdraw(9900);
	cout<<"Current Balance:"<<a.getBalance()<<endl;
	cout<<a.getFee()<<endl;
	
	return 0;
}
