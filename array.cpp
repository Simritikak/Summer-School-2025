#include <iostream>
using namespace std;

int main(){
	
	int arr[5] = {10, 20, 30, 40, 50};
	
	int i=0;
	while( i != 5 ){
		
//		printf("%d \t", &arr[i] );
//		printf("%d \t", arr+i );	// address of all index af an array
		printf("%d \t", *(arr+i) );	// value of an array
		
		i++;
	}
	
	return 0;
}
