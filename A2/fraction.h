//fraction.h
class fraction{
	public:
		fraction();
		fraction(int n, int d);
		void display();
		inline bool isZero(){ 
			return denom == 1 && num ==0;
		}
		inline bool isOne(){ 
			return denom == 1 && num == 1;
		}
		inline bool isInt(){ 
			return denom == 1;
		}
		static int getOneFrac();
		static int getZeroFrac();
		int floor();
		int ceiling();
		
		friend int compare(int i, fraction r);
		friend int compare(fraction r, int i);
		int compare(int i);
	private:
		fraction makeFraction (int n, unsigned d){
			fraction ans;
			ans.num = n;
			ans.denom = d;
			return ans;
		}
		static unsigned int oneFrac;
		static unsigned int zeroFrac;
		int num,
		unsigned int denom;
};
int compare(int i, int j);