#include <iostream>
using namespace std;
#include "binSearch.h"


int main(){
	vector<int> a;
	vector<string> b;
	vector<char*> c;
	binSearch search;
	string tmp = "d";	
	
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	cout<<search.binarySearch(2,a,4)<<endl;
	cout<<search.binarySearch(12,a,4)<<endl;

	b.push_back("a");
	b.push_back("b");
	b.push_back("c");
	b.push_back("d");
	cout<<search.binarySearch(tmp,b,4)<<endl;

	c.push_back("a");
	c.push_back("b");
	c.push_back("c");
	c.push_back("d");
	cout<<search.binarySearch(tmp.c_str(),c,4)<<endl;
	
	return 0;
}