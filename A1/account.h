class account{ 
	public:
		account(){
			accNo=0;accBal=0;
		}
		account(unsigned id, double amount);
		account(account &from);
		void deposit(double amount);
		bool withdraw(double amount);
		unsigned int getId();
		double getBalance();
		bool transfer(account &from, double amt);
	private:
		unsigned accNo;
		double accBal;
};
 
bool transfer(account &from, account &to, double amt);
