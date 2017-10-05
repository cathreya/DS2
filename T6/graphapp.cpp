#include <iostream>
#include "graph.h"

int main(){
	Graph G(10);
	G.addEdge(1,2);
	G.addEdge(2,3);
	G.addEdge(3,4);
	G.addEdge(2,5);
	G.addEdge(5,6);
	G.dfs(1);
	cout<<endl;
	G.bfs(1);

}