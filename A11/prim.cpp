#include "prim.h"
#include <limits.h>
using namespace std;
Prim::Prim(WtGraph& g){
	graph = g;
	MSTWt = 0;
	MST = WtGraph(g.getSize());
	from = vector<int> (g.getSize()+1, -1);
	wt = vector<int> (g.getSize()+1, INT_MAX);
}

void Prim::findMST(){

	for(int i=2;i<=graph.getSize();i++){
		heap.insert(wt[i],i);
	}
	heap.insert(0,1);
	from[1]=-1;
	wt[1] = 0;
	while(!heap.empty()){
		int u = heap.retTop();
		heap.deleteMin();
		for(int v=1;v<=graph.getSize();v++){
			int weight = graph.getWt(u,v);
			//cout<<u<<" "<<v<<" "<<weight<<endl;
			if(weight>0 && wt[v]>weight && heap.inHeap(v)){
				heap.decreaseKey(v,weight);
				wt[v] = weight;
				from[v]=u;
			}
		}
	}
}

WtGraph Prim::retMST(){
	for(int i=2;i<from.size();i++){
		MSTWt+=wt[i];
		cout<<i<<" "<<from[i]<<" "<<wt[i]<<endl;
		MST.addEdge(i,from[i],wt[i]);
	}
	return MST;
}

int Prim::retWt(){
	return MSTWt;
}