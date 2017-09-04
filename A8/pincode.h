#include <iostream>
using namespace std;
#include <set>
#include <fstream>

class pincode{
	public:
		bool store(){
			ifstream fs("pincode.txt");
			if(!fs.is_open() || !fs.good()){
				cout<<"Problem opening file \n";
				return 0;
			}
			else{
				string tmp;
				while(fs>>tmp){
					pincodeSet.insert(tmp);
				}
			}
			fs.close();
		}

		void display(){
			set<string>::iterator pin;
			for(pin = pincodeSet.begin();pin!=pincodeSet.end();pin++){
				cout<<*pin<<" ";
			}
			cout<<endl;
		}
	private:
		set<string> pincodeSet;
};