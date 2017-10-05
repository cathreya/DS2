#include "graphTask.h"
#include <iostream>
using namespace std;

void graphTask::findConnectedComponents(){
	for(int i=1;i<getSize();i++){
		if(!isVisited(i)){
			bfs(i);
			cout<<endl;
		}
	}
	clearVisited();
}
