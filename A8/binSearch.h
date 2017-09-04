#include <string.h>
#include <vector>
using namespace std;

class binSearch{
	public:
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
};