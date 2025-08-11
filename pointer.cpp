#include <iostream>
using namespace std;

int main(){
	
	int num = 30;
	int* ptr = &num;
	
	cout<< num <<endl; // 30
	cout<< ptr <<endl;	// address of num
	cout<< &num <<endl;	// address of num
	
	cout<< num <<endl;	// 30
	cout<< *ptr<<endl;	// 30
	cout<< *(&num) <<endl;	// 30
	cout<< **(&ptr) <<endl; // 30
	
	
	return 0;
}
