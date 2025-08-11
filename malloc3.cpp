#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	int *arr = (int *)malloc( sizeof(int) * 96543234567898765 );
	
	if( arr != NULL )
		cout<<"Memory allocate sucessfully: \n";
	else
		cout<<"Fail to allocate: \n";
	
	
	free(arr);		// use to deallocate memory which is allocated by malloc.	
	arr = NULL;		// use to avoid dangling pointer

	
	return 0;
}
