#include <iostream>
using namespace std;

void func(  ){
	
	cout<<"Hello world: \n";
}

int main(){
	
	void (*ptr) ();	// function pointer
	
	ptr = func;
	
	ptr();
	func();
	
	return 0;
}
