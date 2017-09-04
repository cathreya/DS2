#include <iostream>
#include "fraction.h"
using namespace std;		

int main(){
	fraction a(1,1);
	fraction c(10,2);
	
	
	cout<<"Is a a proper fraction: "<<a.isProper()<<endl;
	cout<<"Is c a proper fraction: "<<c.isProper()<<endl;
	return 0;
}
