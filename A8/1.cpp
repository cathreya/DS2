#include <iostream>
using namespace std;
#include <string.h>
#include <vector>
template <class T>
int binarySearch(const T obj, const vector<T> arr, int n){
	int high= n-1;
	int low = 0;
	while(high>=low){
		int mid = low + (high-low)/2;
		if(obj == arr[mid]){
			return mid;
		}
		else if(obj < arr[mid]){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return -1;
}

int binarySearch(const char* obj, const vector<char*> arr, int n){
	int high= n-1;
	int low = 0;
	while(high>=low){
		int mid = low + (high-low)/2;
		if(strcmp(obj,arr[mid])==0){
			return mid;
		}
		else if(strcmp(obj,arr[mid])<0){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return -1;	
}

int main(){
	vector<int> a;
	vector<string> b;
	vector<char*> c;
		
	string tmp = "a";
	cout<<"ENTER INTS\n";
	for(int i=0;i<4;i++){
		int t;
		cin>>t;
		a.push_back(t);
	}
	cout<<binarySearch(1,a,4)<<endl;
	cout<<"ENTER STRINGS\n";
	for(int i=0;i<4;i++){
		string t;
		cin>>t;
		b.push_back(t);
	}	
	cout<<binarySearch(tmp,b,4)<<endl;
	cout<<"ENTER CSTRING\n";
	for(int i=0;i<4;i++){
		char * t = new char[10000];
		cin>>t;
		c.push_back(t);
	}
	cout<<binarySearch(tmp.c_str(),c,4)<<endl;
	for(int i=0;i<4;i++){
		delete[] c[i];
	}
	return 0;
}