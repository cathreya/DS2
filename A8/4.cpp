#include <iostream>
using namespace std;
#include <set>
#include <fstream>

int main(){
	ifstream fs("pincode.txt");
	if(!fs.is_open() || !fs.good()){
		cout<<"Problem opening file \n";
		return 0;
	}
	else{
		set<string> pincodeSet;
		string tmp;
		while(fs>>tmp){
			pincodeSet.insert(tmp);
		}
		set<string>::iterator pin;
		for(pin = pincodeSet.begin();pin!=pincodeSet.end();pin++){
			cout<<*pin<<" ";
		}
		cout<<endl;
	}

}