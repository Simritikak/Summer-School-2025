#include <iostream>
using namespace std;

/*
	WA template function called TotalCount that takes an array, its size and a value of 
	any data type as parameters. The function should return the number of times the value
	appears in the array.		
*/

template <class T, class U>

auto sum( T a, U b ){
	
	return a+b;
}

int main(){
	
	cout<<"Sum: "<< sum(10, 10)<<endl;
	cout<<"Sum: "<< sum(10.5f, 10.5f)<<endl;
	cout<<"Sum: "<< sum(10.5f, 10)<<endl;
	cout<<"Sum: "<< sum(10, 10.5f)<<endl;
	
	return 0;
}
