#include <stdio.h>

int main(){
	
	const int num = 10;
	
	int * ptr = &num;
	
	*ptr = 20;
	
	printf("%d", num);
	
	return 0;
}
