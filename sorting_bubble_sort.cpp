#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
	
	int i = 0;
	bool flag = false; 
	while( i < size ){
		
		for(int j=0; j<size-i; j++){
			
			if( arr[j] > arr[j+1] ){
				
				swap( arr[j], arr[j+1] );
				flag = true;
			}
				
		}
		if( flag == false )
			break;
		i++;
	}
}


int main(){
	
	int arr[6] = {10, 19, 13, 18, 17, 14};
	
	bubbleSort( arr, 5 );
	
	int i=0;
	while( i != 6 ){
		
		cout<< arr[i]<<" ";
		i++;
	}
	
	return 0;
}
