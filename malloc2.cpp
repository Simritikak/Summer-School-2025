#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	int *arr = (int *)malloc( sizeof(int) * 5 );
	
	if( arr != NULL )
		cout<<"Memory allocate sucessfully: \n";
	else
		cout<<"Fail to allocate: \n";
	
	
	for(int i=0; i<5; i++){
		
		cout<<"arr["<<i<<"]: ";
//		cin>> arr[i];
		cin>> *(arr+i);
	}
	
	for(int i=0; i<5; i++){
		
		cout<< *(arr+i)<<" ";
	}
	
	
	free(arr);		// use to deallocate memory which is allocated by malloc.	
	arr = NULL;		// use to avoid dangling pointer

	
	return 0;
}
