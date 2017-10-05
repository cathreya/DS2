#include "kruskal.h"
#include <algorithm>
#include <limits.h>
#include <iostream>
using namespace std;

Kruskal::Kruskal(WtGraph& g){
	graph = g;
	MSTWt = 0;
	MST = WtGraph(g.getSize());
	dsu = DSU(g.getSize());
}

void Kruskal::findMST(){
	for(int i=1;i<=graph.getSize();i++){
		for(int j=1;j<=graph.getSize();j++){
			int wt = graph.getWt(i,j);
			if(wt!=0){
				edge.push_back(Edge(i,j,wt));
			}
		}
	}
	sort(edge.begin(),edge.end());
	for(int i=0;i<edge.size();i++){
		int u = edge[i].getU();
		int v = edge[i].getV();
		int wt = edge[i].getWt();
		if(dsu.findSet(u)!=dsu.findSet(v)){
			MST.addDirEdge(u,v,wt);
			dsu.unionSet(u,v);
		}
	}
}

WtGraph Kruskal::retMST(){
	for(int i=1;i<=MST.getSize();i++){
		for(int j=1;j<=MST.getSize();j++){
			int wt = MST.getWt(i,j);
			if(wt!=0){
				MSTWt += wt;
				cout<<i<<" "<<j<<" "<<wt<<endl;
			}
		}
	}
	return MST;
}

int Kruskal::retWt(){
	return MSTWt;
}