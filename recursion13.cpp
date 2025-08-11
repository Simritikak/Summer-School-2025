#include <iostream>

int BinarySearch(int arr[], int s, int e, int n){
	
	if( s>e )
		return -1;
		
	int mid = (s+e) / 2;
	
	if( arr[mid] == n )
		return mid;
	
	if( arr[mid] < n )
		BinarySearch(arr, mid+1, e, n);
	
	else
		BinarySearch(arr, s, mid-1, n);
}

int main(){
	
	int arr[5] = {1, 2, 3, 4, 5};
	
	int size = sizeof(arr)/sizeof(int);
	
	std::cout<<"sum: "<<BinarySearch(arr, 0, size-1, 4);
	
	return 0;
}










