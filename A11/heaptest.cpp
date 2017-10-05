#include <iostream>
#include "heap.h"
using namespace std;

int main(){
	vector<int> vt;
	vector<int> wt;
	vt.push_back(5);
	vt.push_back(4);
	vt.push_back(3);
	vt.push_back(2);
	vt.push_back(1);

	wt.push_back(5);
	wt.push_back(4);
	wt.push_back(3);
	wt.push_back(2);
	wt.push_back(1);

	Heap heap;
	heap.buildHeap(vt,wt);
	// heap.insert(5,5);
	// heap.insert(4,4);
	// heap.insert(3,3);
	// heap.insert(2,2);
	// heap.insert(1,1);
	while(!heap.empty()){
		cout<<heap.retTop()<<endl;
		heap.deleteMin();	
	}
	

	// cout<<heap.retTop()<<endl;
	// heap.decreaseKey(5,0);
	// cout<<heap.retTop()<<endl;
}

