#include "floydwarshall.h"
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


FW::FW(WtGraph& g){
	graph = g;
	dist = vector<vector<int> >(g.getSize()+1,vector<int>(g.getSize()+1,INT_MAX));
	pred = vector<vector<int> >(g.getSize()+1,vector<int>(g.getSize()+1,0));
}

void FW::findAPSP(){
	for(int i=1;i<=graph.getSize();i++){
		for(int j=1;j<=graph.getSize();j++){
			int wt = graph.getWt(i,j);
			if(i==j){
				dist[i][j]=0;
			}
			if(wt!=0){
				dist[i][j] = wt;

			}
		}
	}

	for(int k = 0;k<graph.getSize();k++){

		for(int u=1;u<=graph.getSize();u++){
			for(int v=1;v<=graph.getSize();v++){
				if(dist[u][k]!= INT_MAX && dist[k][v] != INT_MAX && dist[u][v] > dist[u][k] + dist[k][v] ){
					dist[u][v] = dist[u][k] + dist[k][v];
					pred[u][v] = k;
				}
			}
		}

	}

}

void FW::printAPSP(){
	for(int i=1;i<dist.size();i++){
		for(int j=1; j<dist.size();j++ ){
			if(dist[i][j]==INT_MAX){
				cout<<"INF"<<"\t";
			}
			else{
				cout<<dist[i][j]<<"\t";
			}
		}
		cout<<endl;
	}
}

void FW::findSP(int source, int dest, int& total){
	if(pred[source][dest]==0){
		cout<<source<<"-"<<dest<<" Distance: "<<dist[source][dest]<<endl;;
		total+=dist[source][dest];
	}
	else{
		findSP(source,pred[source][dest], total);
		findSP(pred[source][dest],dest, total);
	}
}

void FW::findSP(int source, int dest){
	int total = 0;
	findSP(source,dest,total);
	cout<<"Total Distance: "<<total<<endl;
}