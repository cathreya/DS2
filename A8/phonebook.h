#include <iostream>
#include <map>
using namespace std;
class phonebook{
	public:
		bool store(){
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
		}
		void search(){
			cout<<"Enter Phone Number to search\n";
			long long int phoneNo;
			cin>>phoneNo;
			if(phonebook.find(phoneNo)!= phonebook.end()){
				cout<<"Number belongs to : "<<phonebook[phoneNo]<<endl;
			}
			else{
				cout<<"Not Found\n";
			}
		}
		void display(){
			map<long long int , string>::iterator curNumber;
			for(curNumber = phonebook.begin();curNumber!=phonebook.end();curNumber++){
				cout<<curNumber->first<<endl;
			}	
		}
	private:
		map<long long int , string> phonebook;
};