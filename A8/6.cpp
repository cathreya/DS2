#include <iostream>
#include <map>

using namespace std;

int main(){
	map<long long int , string> phonebook;
	int quantity=0;
	cout<<"Enter how many entries\n";
	cin>>quantity;
	for(int i=0;i<quantity;i++){
		long long int phoneNo;
		string name;
		cout<<"Enter Phone Number and Name\n";
		cin>>phoneNo>>name;
		phonebook[phoneNo] = name;
	}
	cout<<"Enter Phone Number to search\n";
	long long int phoneNo;
	cin>>phoneNo;
	if(phonebook.find(phoneNo)!= phonebook.end()){
		cout<<"Number belongs to : "<<phonebook[phoneNo]<<endl;
	}
	else{
		cout<<"Not Found\n";
	} 
	return 0;
}