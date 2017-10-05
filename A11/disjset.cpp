#include "disjset.h"
using namespace std;

DSU::DSU(){
	size =0 ;
}
DSU::DSU(int n){
	size = n;

	for(int i=0;i<=n;i++){
		parent.push_back(i);
	}
}

int DSU::findSet(int node){
	int i = node;
	while(parent[i]!=i){
		parent[node] = parent[i];
		i = parent[i];
	}
	return parent[node];
}

void DSU::unionSet(int node1, int node2){
	int root1 = findSet(node1);
	int root2 = findSet(node2);
	parent[root1] = root2;
}
