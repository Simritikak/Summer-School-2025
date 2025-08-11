#include <iostream>
using namespace std;

int num = 10;

int main(){
	
	int num = 20;
	int *ptr = &num;
	int &x = num;
	
	cout<<num <<endl;	// 20
	// we need to use scoperesolution operator to print global value
	cout<< ::num <<endl;
	
	cout<<ptr <<endl;	// address of num
	cout<<x <<endl;		// 20
	
	return 0;
}
