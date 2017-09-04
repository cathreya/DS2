#include <iostream>
#include <map>
#include "phonebook.h"
using namespace std;

int main(){
	phonebook ph;
	ph.store();
	ph.search();
	ph.display();
	return 0;
}