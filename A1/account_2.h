//A1: Learning Classes, Objects, Constructor using Bank money transfer and planar geometry applications

class account{ 
	public:
		account(){
			accNo=0;accBal=0;creditStatus='C';
			limitA=100000;limitB=10000;
		}
		account(unsigned id, double amount,char status);
		account(account &from);
		void deposit(double amount);
		bool withdraw(double amount);
		char getCreditStatus();
		void putCreditStatus(char status);
		void modifyCreditLimit(int limA,int limB);
		unsigned int getId();
		double getBalance();
		bool transfer(account &from, double amt);
	private:
		unsigned int accNo;
		double accBal;
		char creditStatus;
		unsigned int limitA;
		unsigned int limitB;
};
 
bool transfer(account &from, account &to, double amt);
