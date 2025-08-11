#include "mystack.h"

int main(){
	
	myStack <char> s;
	
	s.push( 'A' );
	s.push( 'B' );
	s.push( 'C' );
	s.push( 'D' );
	s.push( 'E' );
//	s.push( 10 );	stack overflow:

	while( !s.empty() ){
		
		cout<< s.top() <<" ";
		s.pop();
	}
	
	
	return 0;
}
