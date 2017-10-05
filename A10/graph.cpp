#include <stack>
#include <queue>
#include "graph.h"
using namespace std;


Graph::Graph(int n){
	G = vector<vector<int> > (n+1);
	visited = vector<bool> (n+1,0);
}

Graph::Graph(vector<vector<int> > source){
	for(int i=0;i<source.size();i++){
		G.push_back(source[i]);
	}	
}

void Graph::dfs(int source){
//	vector<bool> visited(G.size(),0);
	stack<int> stk;
	stk.push(source);
	while(!stk.empty()){
		int u = stk.top();
		stk.pop();
		if(!visited[u]){
			visited[u]=true;
			visit(u);

			for(int i=0;i<G[u].size();i++){
				int v = G[u][i];
				stk.push(v);
			}
		}
	}
}

void Graph::bfs(int source){
//	vector<bool> visited(G.size(),0);
	queue<int> que;
	visited[source]= true;
	visit(source);
	que.push(source);
	while(!que.empty()){
		int u = que.front();
		que.pop();
		for(int i=0;i<G[u].size();i++){
			int v = G[u][i];
			if(!visited[v]){
				visited[v]=true;
				visit(v);
				que.push(v);
			}
		}
	}
}

bool Graph::addEdge(int u,int v){
	if(u>=G.size() || v>=G.size()){
		return false;
	}
	G[u].push_back(v);
	G[v].push_back(u);
	return true;
}

void Graph::visit(int node){
	cout<<node<<endl;
}
