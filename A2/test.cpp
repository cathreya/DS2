#include <iostream>
#include "fraction.h"
using namespace std;		

int main(){
	fraction a(1,1);
	fraction c(10,2);
	if(1){
		fraction b(1,1);
		cout<<fraction::getOneFrac()<<endl;
	}
	cout<<fraction::getOneFrac()<<endl;	

	int i=5,j=10;
	cout<<compare(i,j)<<endl;
	cout<<compare(&i,&j)<<endl;
	
	cout<<compare(a,i)<<endl;
	cout<<compare(i,a)<<endl;
	cout<<compare(&a,&i)<<endl;
	cout<<compare(&i,&a)<<endl;
	
	cout<<a.isProper()<<endl;
	cout<<c.isProper()<<endl;
	return 0;
}
