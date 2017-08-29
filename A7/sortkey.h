#include <iostream>
using namespace std;
#include <iomanip>
#include <stdlib.h>
#include <vector>
#include <sstream>
#include <fstream>
#include <string.h>
#ifndef SORTKEY_H
#define SORTKEY_H
class mysort{
	public:
		mysort(){}		
		mysort(int ke, char del, const vector<string> &line){
			this->lines = line;
		}
		static void setKey(int ke){
			mysort::key = ke;
		}
		static void setDelimit(char del){
			mysort::delimit = del;
		}
		mysort(string filename){
			string s;
			ifstream ifs;
			try{
				if(filename.substr(filename.length()-3) != "txt"){
					throw 404;
				}	
			}
			catch(int e){
				cout<<"Error: "<<e<<" File Not TXT\n";
				exit(0);
			}
			
			ifs.open(filename.c_str());
			if(!ifs.is_open() || !ifs.good()){
				cout<<"Problem opening file\n";
			}
			while(getline(ifs,s)){ 
				lines.push_back(s);
			}
		}
		void addLine(string line){
			this->lines.push_back(line);
		}
		void sortl();
		void write(string filename);
                                       
	private:

		
		static bool compare(string a, string b){
			int counter=0;
			if(key==0){
				return a<b;
			}
			string c1="",c2="";
			for(int i=0;i<a.size();i++){
				// cout << counter << " ";
				if(a[i]==delimit){
					counter++;
				}
				else if(counter==key-1){
					while(a[i]!=delimit && i!=a.size()){
						c1+=a[i];
						i++;
					}
					break;
				}
			}
			counter = 0;
			for(int i=0;i<b.size();i++){
				if(b[i]==delimit){
					counter++;
				}
				else if(counter==key-1){
					while(b[i]!=delimit && i!=b.size()){
						c2+=b[i];
						i++;
					}
					break;
				}
			}
			return c1<c2;
		}
		static int key;
		static char delimit;
		vector<string> lines; 
};
#endif