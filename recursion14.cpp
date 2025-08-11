#include <iostream>
using namespace std;

void printPi( string str ){
	
	if( str.length() == 0 )
		return;
	
	if( str[0] == 'p' && str[1] == 'i' ){
		
		cout<<"3.14";
		printPi( str.substr(2) );
	}
	else{
		
		cout<< str[0];
		printPi( str.substr(1) );
	}
}

int main(){
	
	string str = "klsdfjpifdkjfpdjfdpipipii";
	
	printPi(str);
	
	return 0;
}










