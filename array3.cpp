#include <iostream>

using namespace std;

int main(){
	
	char *ptr[3] = {"We", "are", "coders"};
	
	printf("%d \n", &ptr[0] );
	printf("%d \n", &ptr[1] );
	printf("%d \n\n", &ptr[2] );
	
	return 0;
}
