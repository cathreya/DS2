//fraction.h
#include <iostream>
#include <cstdlib>
using namespace std;
class fraction{
	private:
		fraction makeFraction (int n, unsigned d){
			fraction ans;
			ans.num = n;
			ans.denom = d;
			return ans;
		}
		int findGcd(int a, int b) const;
		void decrementZero();
		void incrementZero();
		void incrementOne();
		void decrementOne();
		int num;
		unsigned int denom;
		static int oneFrac;
		static int zeroFrac;
	public:
		fraction();
		fraction(int n, int d);
		inline void display() const{
			cout<<num<<"/"<<denom<<endl;
		}
		inline bool isZero() const{ 
			return denom == 1 && num ==0;
		}
		inline bool isOne() const{ 
			return denom == 1 && num == 1;
		}
		inline bool isInt() const{ 
			return denom == 1;
		}
		inline bool isProper() const{
			return abs(num)<=denom;
 		}
		static int getOneFrac();

		static int getZeroFrac();

		int floor() const;
		int ceiling() const;
		
		//friend int compare(int i, fraction r);
		friend int compare(int* i, fraction* r);
		friend int compare(int& i, fraction& r);
		//friend int compare(fraction r, int i);
		friend int compare(fraction* r, int* i);
		friend int compare(fraction& r, int& i);
		int compare(int i) const;
		~fraction();
		
};
//int compare(int i, int j);
int compare(int* i, int* j);
int compare(int& i, int& j);

