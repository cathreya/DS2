#include "floydwarshall.h"
#include "wtgraph.h"
using namespace std;

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

	FW fw(g);
	fw.findAPSP();
	fw.printAPSP();
	fw.findSP(1,4);
}