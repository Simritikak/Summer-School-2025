#include <iostream>
using namespace std;

int linearSearch(int arr[], int target){
	
	
	for( int i=0; i<7; i++ ){
		
		if( arr[i] == target )
			return i;
	}
	
	return -1;
}

int main(){
	
	int arr[7] = {14, 78, 34, 99, 12, 90, 77};
	
	int idx = linearSearch(arr, 78);
	
	cout<< idx <<endl;
	
	return 0;
}
