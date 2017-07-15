#include "time.h"
using namespace std;
int main(){
	timet time1(5,10,20),time2(10,20,30),time3(22,9,2);
	cout<<time1<<endl;
	cout<<time1.getHour()<<endl;

	time2 = time1 + 5;
	cout<<time2<<endl;

	time2 = time1(5,10);
	cout<<time2<<endl;
	return 0;
}