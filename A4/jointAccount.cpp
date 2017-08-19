#include <iostream>
using namespace std;
#include "jointAccount.h"

jointAccount::jointAccount():account(),jointOwner("NA"){}


jointAccount::jointAccount(unsigned id, double amt, char status, const string own1,const string own2):account(id,amt,status,own1),jointOwner(own2){}

void jointAccount::setJOwner(string own){
	jointOwner = own;
}

bool jointAccount::withdraw(double amt){
	if(account::withdraw(amt)){
		return true;
	}
	return false;
}
