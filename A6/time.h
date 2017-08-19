#include <iostream>
#include <iomanip>

using std::ostream;
using std::istream;

#ifndef TIME_H
#define TIME_H
class timet{
	public:
		timet();
		timet(int h,int m,int s);
		timet(const timet& from);
		int getHour() const;
		int getMinute() const;
		int getSecond() const;

		//friend timet operator+(timet t, int h);
		timet operator+(int h);	
		timet operator++(int dummy);
		timet& operator=(const timet &from);
		timet operator()(int h, int m);

		friend ostream& operator<<(ostream& out, timet& t);
		friend istream& operator>>(istream& in, timet& t);

	private:
		int hour,minute,second;
};

#endif