#include <iostream>

void func(int num, int x){
	
	if( num > 10 )
		return;
	
	std::cout<< num*x <<std::endl;
	
	func( num+1, x );
}

int main(){
	
	func( 1, 12 );
	
	return 0;
}
