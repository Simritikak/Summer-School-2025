#include <iostream>
using namespace std;

int main(){
	
	double num1 = 20;
	double *ptr = &num1;
	
	printf("%d \n", ptr);
	
	ptr++;
	
	printf("%d \n", ptr);
	
	
	return 0;
}
