#include <iostream>
using namespace std;
#include "graphTask.h"

int main(){
	graphTask G(6);
	G.addEdge(1,2);
	G.addEdge(2,3);
	G.addEdge(3,4);
	G.addEdge(4,1);
	G.addEdge(5,6);
	
	G.findConnectedComponents();
}
