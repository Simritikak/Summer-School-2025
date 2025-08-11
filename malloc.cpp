#include <iostream>
#include <stdlib.h>
using namespace std;
/*
malloc(): malloc stands for memory allocation, it allocate memory dynamically.
- it allocate memory in bytes.
- we have to pass number of bytes we need to allocate dynamically.
- it return NULL in case of fail to allocate memory.
- it allocate contiguous number of blocks.
- it return void pointer, so need to type cast it.
- it define inside <stdlib.h> header file.
*/

int main(){
	
	int *ptr = (int *)malloc( sizeof(int) * 5 );
	
	if( ptr != NULL )
		cout<<"Memory allocate sucessfully: \n";
	else
		cout<<"Fail to allocate: \n";
	
	
	free(ptr);		// use to deallocate memory which is allocated by malloc.	
	ptr = NULL;		// use to avoid dangling pointer

	
	return 0;
}
