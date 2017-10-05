#include <stack>
#include <queue>
#include "graph2.h"
using namespace std;


GraphMat::GraphMat(int n){
	path = vector<int> (size+1);
	adjMat = new int*[n];

	for(int i=0;i<n;i++){
		adjMat[i] = new int[n];
	}
	size = n;
}

int GraphMat::bfs(int source, int dest){
	vector<int> dist(size+1,-1);

	queue<int> que;
	dist[source] = 0;
	visit(source);
	path[source]=-1;
	que.push(source);
	while(!que.empty()){
		int u = que.front();
		que.pop();
		for(int v=0;v<size;v++){
			if(adjMat[u][v]==1 && dist[v]==-1){
				path[v]=u;
				dist[v]=dist[u]+1;
				que.push(v);
			}
		}
	}
	return dist[dest];
}

void GraphMat::retDist(int src, int dest){
	int tmp =bfs(src,dest);
	if(tmp != -1){
		cout<<"Distance is: "<<tmp<<endl;
		int i = path[dest];
		stack<int> s;
		s.push(dest);
		while(i!=-1){
			s.push(i);
			i = path[i];
		}
		while(!s.empty()){
			cout<<s.top()<<endl;
			s.pop();
		}

	}
	else{
		cout<<"Destination not reachable from source\n";
	}
}

bool GraphMat::addEdge(int u,int v){
	if(u>=size || v>=size){
		return false;
	}
	adjMat[u][v] = 1;
	adjMat[v][u] = 1;
	return true;
}

void GraphMat::visit(int node){
	cout<<node<<endl;
}