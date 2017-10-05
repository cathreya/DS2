#include<vector>
#include<iostream>
using namespace std;
#ifndef GRAPH_H
#define GRAPH_H
class Graph{
	public:
		Graph(int n);
		Graph(vector<vector<int> > source);
		void dfs(int source);
		void bfs(int source);
		void visit(int node);
		bool addEdge(int u, int v);
	private:
		vector<vector<int> > G;
};
#endif