#include <iostream>
using namespace std;

template <class T, class U>
void swap( T &a, U& b ){
	
	auto temp = a;
	a = b;
	b = temp;
}

int main(){
	
	{
		float a = 12.4;
		float b = 13.5;
		cout<< a<< "  "<<b <<endl;
		swap(a, b);
		cout<< a<< "  "<<b <<endl<<endl;
	}
	
	{
		int a = 12.4;
		int b = 13;
		cout<< a<< "  "<<b <<endl;
		swap(a, b);
		cout<< a<< "  "<<b <<endl<<endl;
	}
	
	
	return 0;
}
