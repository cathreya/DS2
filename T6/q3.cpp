#include <iostream>
#include "graph2.h"
using namespace std;

int main(){
	GraphMat G(7);
	G.addEdge(1,2);
	G.addEdge(2,3);
	G.addEdge(3,4);
	G.addEdge(2,5);
	G.addEdge(5,6);
	G.retDist(1,2);
	G.retDist(1,5);

}