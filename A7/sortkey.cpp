#include <iostream>
#include <vector>
#include "sortkey.h"
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

int mysort::key = 0;
char mysort::delimit = ' ';

void mysort::sortl(){
	sort(lines.begin(),lines.end(),compare);
}

void mysort::write(string filename){
	ofstream of;
	try{
		if(filename.substr(filename.length()-3) != "txt"){
			throw 404;
		}	
	}
	catch(int e){
		cout<<"Error: "<<e<<" File Not TXT\n";
		exit(0);
	}
	of.open(filename.c_str());
	if(!of.is_open() || !of.good()){
		cout<<"NOT FOUND\n";
	}
	else{
		for(int i=0;i<lines.size();i++){
			of<<lines[i]<<'\n';
		}
	}
}

