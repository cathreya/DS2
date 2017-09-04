#include <iostream>
#include "jointAccount.cpp"
using namespace std;

int main(){
	jointAccount A(10,90000,'A',"Ravi","Mala");
	cout<<A.getJOwner()<<endl;
	A.setJOwner("Raju");
	cout<<A.getJOwner()<<endl;
}