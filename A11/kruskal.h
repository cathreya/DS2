#include "disjset.h"
#include "wtgraph.h"
#include <vector>
using namespace std;

#ifndef KRUSK_H
#define KRUSK_H

class Edge{
	public:
		Edge(int u,int v,int wt){
			this->u = u;
			this->v = v;
			this->wt = wt;
		}
		inline int getU(){
			return u;
		}
		inline int getV(){
			return v;
		}
		inline int getWt(){
			return wt;
		}
		bool operator < (const Edge & y) const{
			return this->wt < y.wt;
		}
		bool operator > (const Edge & y) const{
			return this->wt > y.wt;
		}
	private:
		int u;
		int v;
		int wt;
};

class Kruskal{
	public:
		Kruskal(WtGraph& g);
		void findMST();
		WtGraph retMST();
		int retWt();
	private:
		DSU dsu;
		WtGraph graph;
		int MSTWt;
		WtGraph MST;
		vector<Edge> edge;
};
#endif