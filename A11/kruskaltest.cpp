#include <iostream>
#include "kruskal.h"
#include "wtgraph.h"
using namespace std;

int main(){
	WtGraph g(6);
	g.addEdge(1,2,5);
	g.addEdge(1,3,6);
	g.addEdge(1,4,4);
	g.addEdge(2,3,1);
	g.addEdge(2,4,2);
	g.addEdge(3,4,2);
	g.addEdge(3,5,5);
	g.addEdge(3,6,3);
	g.addEdge(4,6,4);
	g.addEdge(5,6,4);
	Kruskal k(g);
	k.findMST();
	k.retMST();
	cout<<"Wt of MST: "<<k.retWt()<<endl;
}