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

		timet& operator+(int h);	
		timet operator++(int dummy);
		timet& operator=(timet& from);
		timet operator()(int h, int m);

		friend ostream& operator<<(ostream& out, timet& t);
		friend istream& operator>>(istream& in, timet& t);

	private:
		int hour,minute,second;
};

timet::timet(){
	hour = 0;
	minute = 0;
	second = 0;
}

timet::timet(int h ,int m, int s){
	hour = minute = second = 0;
	if(h<24){
		hour = h;
	}
	if(minute<60){
		minute = m;
	}
	if(second<60){
		second = s;
	}
}

int timet::getHour() const{
	return hour;
}

int timet::getMinute() const{
	return minute;
}

int timet::getSecond() const{
	return second;
}

timet& timet::operator+(int h){
	int tmpHour = hour;
	if(tmpHour + h > 23){
		tmpHour = (tmpHour + h)%24;
		timet copied(tmpHour,0,0);
		return copied;
	}
	else{
		timet copied(tmpHour,minute,second);
		return copied;
	}
}

timet timet::operator++(int dummy){
	timet tmp = *this;
	second+=1;
	if(second == 60){
		second =0;
		minute+=1;
		if(minute == 60){
			minute = 0;
			hour +=1;
			if(hour == 24){
				hour=0;
			}
		}
	}
	return tmp;
}

timet& timet::operator=(timet &from){
	hour = from.hour;
	minute = from.minute;
	second = from.second;
	return *this;
}

timet timet::operator()(int h, int m){
	int tmpHour=hour,tmpMin=minute;
	if(tmpMin+m > 59){
		tmpMin = (tmpMin+m)%59;
		tmpHour+=1;
	}
	if(tmpHour+h > 23){
		tmpHour = (tmpHour+h)%23;
	}
	timet copied(tmpHour,tmpMin,0);
	return copied;
}

ostream& operator<<(ostream& out, timet &t ){
	out<<t.hour<<':'<<t.minute<<'\n';
	return out;
}

istream& operator>>(istream& in, timet& t){
	in>>t.hour;
	in.ignore();
	in>>t.minute;
	return in;
}
