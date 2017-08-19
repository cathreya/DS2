#include "freechecking.h"

class newFreeChecking: public freeChecking{
	public:
		newFreeChecking();
		newFreeChecking(unsigned id, double amount,char status,bool f);

		bool withdraw(double amt);
};
