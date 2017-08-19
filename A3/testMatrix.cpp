#include <iostream>
#include "matrix.h"
using namespace std;
int main(){
	matrix a(3,3);
	a.read();
//	a.display();
	
	matrix b(3,3);
	b.read();
//	b.display();
//	b=a;
//	b.display();
	matrix c(3,3);
	c.display();
//	c = a+b;
	c= a*3;
	c.display();
	c+=a;
	c.display();
	cout<<c[0][1];
//cout<<c["1,3"];

	
	return 0;
}
