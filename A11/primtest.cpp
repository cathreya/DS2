#include <iostream>
using namespace std;
#include "prim.h"
#include "wtgraph.h"

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
	//g.bfs();
	Prim p(g);
	p.findMST();
	WtGraph mst = p.retMST();
	cout<<"Wt of MST: "<<p.retWt()<<endl;
	
}