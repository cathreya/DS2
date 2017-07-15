#include <iostream>
#include <iomanip>

using std::ostream;
using std::istream;
class timet{
	public:
		timet();
		timet(int h,int m,int s);
		int getHour() const;
		int getMinute() const;
		int getSecond() const;

		timet operator+(int h);	
		timet operator++(int dummy);
		timet& operator=(timet& from);
		timet operator()(int h, int m);

		friend ostream& operator<<(ostream& out, timet& t);
		friend istream& operator>>(istream& in, timet& t);

	private:
		int hour,minute,second;
};

