#include <vector>
#include "wtgraph.h"
using namespace std;
#ifndef FW_H
#define FW_H

class FW{
	public:
		FW(WtGraph& g);
		void findAPSP();
		void printAPSP();
		void findSP(int source, int dest);

	private:
		void findSP(int source, int dest, int& total);
		WtGraph graph;
		vector<vector<int> > dist;
		vector<vector<int> > pred;
};
#endif