#include <iostream>
#include "jointAccount.h"
#include "freechecking.h"

class jointChecking: public jointAccount, public freeChecking{
	public:	
		jointChecking():jointAccount(),freeChecking();
		jointChecking(unsigned id, double amt, char status,string own1, bool f, string own2):jointAccount(id,amt,status,own1,own2),freeChecking(id,amt,status,own1,f){}
};
