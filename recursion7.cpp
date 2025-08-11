#include <iostream>

int fact(int num){
	
	if( num == 0 || num == 1 )
		return 1;
	
	return num * fact(num-1);
}

int main(){
	
	std::cout<<"Factorial is: "<<fact( 5 );
	
	return 0;
}
