#include "heap.h"
#include "wtgraph.h"
#include <vector>
using namespace std;

#ifndef PRIM_H
#define PRIM_H

class Prim{
	public:
		Prim(WtGraph& g);
		void findMST();
		WtGraph retMST();
		int retWt();
	private:
		Heap heap;
		WtGraph graph;
		WtGraph MST;
		int MSTWt;
		vector<int> from;
		vector<int> wt;
};
#endif