#include <iostream>
using namespace std;
#include "account_2.h"

class jointAccount:public account{
	public:
		jointAccount();
		jointAccount(unsigned id, double amt, char status, const string owner1,const string owner2);
		inline string getJOwner() const{
			return jointOwner;
		}
		void setJOwner(string own);
		bool withdraw(double amt);
	private:
		string jointOwner;
};
