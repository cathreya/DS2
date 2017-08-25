#include <iostream>
using namespace std;
#include "List.h"

int main(){
	List <int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_front(90);
	l.push_after(3,10);
	l.display();
	l.remove(90);
	l.display();
	l.remove_n(3);
	l.display();
}