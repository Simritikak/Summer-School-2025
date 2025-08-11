#include <iostream>
#include <stack>
using namespace std;

int main(){
	
	string str = "Hello! How are you?";
	stack <char> s;
	
	int i=0;
	while( i != str.length() ){
		
		s.push( str[i] );
		i++;
	} 
	
	while( !s.empty() ){
		
		cout<< s.top() ;
		s.pop();
	}
	
	
	return 0;
}
