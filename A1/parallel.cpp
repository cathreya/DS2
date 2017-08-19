#include <iostream>
#include "vector_2.h"
using namespace std;

int main(){
	vector points[4];
	for(int i=0;i<4;i++){
		points[i] = getVector();
	}
	vector line1 = points[0].difference(points[1]);
	vector line2 = points[2].difference(points[3]);
	
	if(line1.isParallel(line2)){
		cout<<"Parallel\n";
	}
	else{
		cout<<"Not Parallel\n";
	}
	return 0;
}
