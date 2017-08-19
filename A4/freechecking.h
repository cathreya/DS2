#include "account_2.h"
class freeChecking:public account{
	public:
		freeChecking();
		freeChecking(unsigned id, double amount,char status,string own1,bool f);
		bool withdraw(double amt);
		inline static int getMinBal(){
			return minBal;
		}
		inline static int getServiceFee(){
			return serviceFee;
		}
		static void setMinBal(int min);
		static void setServiceFee(int fee);
		bool collectFee();
		inline bool getFee(){
			return fee;
		}
		inline void setFee(bool f){
			fee = f;
		}
	private:
		bool fee;
		static int minBal;
		static int serviceFee;
};
