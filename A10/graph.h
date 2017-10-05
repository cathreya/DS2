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
		inline int getSize(){
			return  G.size();
		}
		inline bool isVisited(int i){
			return visited[i];
		}
		inline void clearVisited(){
			visited = vector<bool>(G.size(),0);
		}
	private:
		vector<vector<int> > G;
		vector<bool> visited;
};
#endif
