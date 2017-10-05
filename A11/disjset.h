#include <vector>
using namespace std;
#ifndef DSU_H
#define DSU_H

//Array Implementation with Path Compression
class DSU{
	public:
		DSU();
		DSU(int n);
		int findSet(int node);
		void unionSet(int node1, int node2);
	private:
		vector<int> parent;
		int size;
};
#endif