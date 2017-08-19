#include <iostream>
using namespace std;

#include "xyzcell.h"
#include "time.h"

int main(){
	timet a(1,2,3);
	timet b(7,8,9);
	timet c(4,5,6);
	refxyz s1(a);
	refxyz s2(b);
	refxyz s3(c);
	refxyz s4 = s3;
	refxyz s5 = s2;
	cout<<s3.getCount()<<endl;
	s2 = s4;	
	cout<<s3.getCount()<<endl;
	s1 = s3;
	cout<<s3.getCount()<<endl;
	s4 = s5;
	cout<<s3.getCount()<<endl;
	return 0;
}