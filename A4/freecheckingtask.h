#include "freechecking.h"

class newFreeChecking: public freeChecking{
	public:
		newFreeChecking();
		newFreeChecking(unsigned id, double amount,char status,string name,bool f);

		bool withdraw(double amt);
};
