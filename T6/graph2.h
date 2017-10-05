#include<vector>
#include<iostream>
using namespace std;
#ifndef GRAPH2_H
#define GRAPH2_H
class GraphMat{
	public:
		GraphMat(int n);
		int bfs(int source, int dest);
		void visit(int node);
		bool addEdge(int u, int v);
		void retDist(int src, int dest);
	private:
		int **adjMat;
		vector<int> path;
		int size;
};
#endif