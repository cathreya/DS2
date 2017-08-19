#include <iostream>
#include "vector.h"
using namespace std;

int main(){
	vector points[4],sides[4];
	for(int i=0;i<4;i++){
		points[i] = getVector();
	}
	for(int i=0;i<4;i++){
		sides[i] = points[i].difference(points[(i+1)%4]); 
	}
	int noPerpendicular=0;
	for(int i=0;i<3;i++){
		for(int j=i+1;j<4;j++){
			if(sides[i].isPerpendicular(sides[j])){
				noPerpendicular+=1;
			}
		}
	}
	if(noPerpendicular==4){
		cout<<"Rectangle\n";
	}
	else{
		cout<<"Not a Rectangle\n";
	}
}
