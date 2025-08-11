#include <iostream>
using namespace std;

int num = 10;

int main(){
	
	int num = 20;
	int *ptr = &num;
	int &x = num;
	
	cout<< num <<endl;	// 20
	cout<< *ptr <<endl;	// 20
	cout<< **(&ptr) <<endl;	// 20
	cout<< *(&num) <<endl;	// 20
	
	
	return 0;
}
