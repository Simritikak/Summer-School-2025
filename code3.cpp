#include <iostream>
#pragma pack(1)

using namespace std;

// padding: It is a concept to add some extra byte of memory for better execution

class erangle{

	char name[11];	
	double roll;
	char ch1;
};

int main(){
	
	erangle s1;
	
	cout<< sizeof( s1 );
	
	
	return 0;
}
