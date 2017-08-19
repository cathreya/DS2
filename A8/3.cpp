#include <iostream>
using namespace std;
#include <stack>
#include <fstream>

int main(){
	ifstream fs;
	fs.open("bracket.txt");
	if(!fs.is_open() || !fs.good()){
		cout<<"Problem opening file \n";
		return 0;
	}
	else{
		char c;
		stack<char> sc;
		bool flag = true;
		while(fs>>c){
			if(c== '(' || c== '{' || c== '[' || c== '<'){
				sc.push(c);
			}	
			else if( c== ')' || c== '}' || c== ']' || c== '>'){
				if(sc.empty()){
					flag= false;
				}
				else{
					if((c==')' && sc.top()!='(') || (c=='>' && sc.top()!='<') || (c==']' && sc.top()!='[') || (c=='}' && sc.top()!='{')){
						flag = false;
					}
					else{
						sc.pop();
					}
				}
			}
		}
		if(flag){
			cout<<"Balanced\n";
		}
		else{
			cout<<"Unbalanced\n";
		}
	}
	return 0;
}