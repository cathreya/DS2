#include "graph.h"
#ifndef GRAPH_TASK_H
#define GRAPH_TASK_H

class graphTask:public Graph{
	public:
		graphTask(int n):Graph(n){};
		void findConnectedComponents();		
};
#endif
