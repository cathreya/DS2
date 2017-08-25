#include <iostream>
using namespace std;
#include <stdlib.h>
#include "sortkey.h"

#include <fstream>
//filename source dest number delimiter 
int main(int argc, char* argv[]){
	string source = "text.txt";
	int key = 0;
	char limiter = ' ';
	string dest = "sorted.txt";
	switch(argc){
		case 2:
			source = string(argv[1]);
			break;
		case 3:
			source = string(argv[1]);
			dest = string(argv[2]);
			break;
		case 4:
			source = string(argv[1]);
			dest = string(argv[2]);
			key = atoi(argv[3]);
			break;
		case 5:
			source = string(argv[1]);
			dest = string(argv[2]);
			key = atoi(argv[3]);
			limiter = argv[4][0];
			break;
	}
	
	mysort a(source.c_str());
	a.setKey(key);
	a.setDelimit(limiter);	
	a.sortl();
	a.write(dest.c_str());
	return 0;
}