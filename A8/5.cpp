#include <iostream>
#include <vector>
using namespace std;
#include "employee.h"

int main(){
	int noOfEmps=0;
	cout<<"Enter the number of employees\n";
	cin>>noOfEmps;
	vector<Employee> empVect;
	for(int i=0;i<noOfEmps;i++){
		int sal,eno;
		string name;
		cout<<"Enter Employee Number, Salary and Name\n";
		cin>>eno>>sal>>name;
		Employee tmp(eno,name,sal);
		empVect.push_back(tmp);
	}
	int searchNo;
	cout<<"Enter Employee Number to search for\n";
	cin>>searchNo;
	bool flag = false;
	vector<Employee>::iterator curEmp;
	for(curEmp = empVect.begin();curEmp<empVect.end();curEmp++){
		if(curEmp->getEno() == searchNo){
			cout<<"Employee Found\n";
			cout<<"Name : "<<curEmp->getName()<<endl;
			flag = true;
		}
	}
	if(!flag){
		cout<<"Not Found\n";
	}
}