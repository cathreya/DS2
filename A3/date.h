#include <iostream>

class date{
	public:
		date(){
			day = 1; month = 1; year = 1900;
		}
		date(int d,int m,int y);
		void operator()(int m);
		void display();
	private:
		int day;
		int month;
		int year;
};
