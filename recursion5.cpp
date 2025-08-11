#include <iostream>


void func(int num){
	
	if( num > 5 )
		return;
	
	func( num+1 );
	
	std::cout<< num <<std::endl;
}

int main(){
	
	func( 1 );
	
	return 0;
}
