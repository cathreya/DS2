#include <iostream>
#include "disjset.h"

using namespace std;

int main(){
	DSU a(3);
	a.unionSet(1,2);
	if(a.findSet(2) == a.findSet(3)){
		cout<<"CYC\n";
	}
	a.unionSet(2,3);
	if(a.findSet(1) == a.findSet(3)){
		cout<<"CYC\n";
	}

}