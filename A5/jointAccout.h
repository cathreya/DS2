#include<iostream>
#include"Account.h"
using namespace std;

class jointAccount:public Account{
private:
	string owner1;
	string owner2;
public:
	jointAccount():Account(),owner1(""),owner2(""){};
	jointAccount(int id,double bal,string o1,string o2):Account(id,bal),owner1(o1),owner2(o2){};
	
	inline string getOwner1(){return owner1;}
	virtual void show(){cout<<"Account Type: Joint Account\n";}
	inline string getOwner2(){return owner2;}
	inline string setOwner1(string o){owner1 = o;}
	inline string setOwner2(string o){owner2 = o;}
	virtual inline void display(){
		cout<<"Owner1: "<<owner1<<"\nOwner2: "<<owner2<<"\nAcct Id: "<<get_id()<<"\nAcct Bal: "<<get_bal()<<'\n';
	}
};

