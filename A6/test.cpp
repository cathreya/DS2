#include <iostream>
#include "refstr.h"
using namespace std;

int callcmp(refstr &a, refstr &b){
	cout<<a.getCount()<<endl;
	return a.cmp(b);
}

int main(){
	refstr s1("Hello");
	refstr s2("Welcome");
	refstr s3("Here");
	refstr s4 = s3;
	refstr s5 = s2;
	cout<<s3.getCount()<<endl;
	s2 = s4;	
	cout<<s3.getCount()<<endl;
	s1 = s3;
	cout<<s3.getCount()<<endl;
	callcmp(s1,s2);
	s4 = s5;
	cout<<s3.getCount()<<endl;
	return 0;
}
