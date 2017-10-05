#include <iostream>
using namespace std;
#include "dijk.h"
#include "wtgraph.h"

int main(){
	WtGraph g(5);
	g.addDirEdge(1,2,10);
	g.addDirEdge(1,3,3);
	g.addDirEdge(3,2,4);
	g.addDirEdge(2,3,1);
	g.addDirEdge(2,4,2);
	g.addDirEdge(3,4,8);
	g.addDirEdge(4,5,7);
	g.addDirEdge(5,4,9);
	g.addDirEdge(3,5,2);
	
	//g.bfs();
	Dijk p(g);
	p.findSPT(1);	
	p.retSPT();
	cout<<"Path: \n";
	p.tracePath(4);
}