#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll;
		float cgpa;
		
		btech(){	// constructor
			
			cout<<"I am default constructor: \n";
		}
};

int main(){
	
	btech john, hezal, noah;	// static allocation
	
	btech *s = new btech;		// dynamic allocation
	
	return 0;
}
