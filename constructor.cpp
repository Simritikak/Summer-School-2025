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
	
	btech vansh, riya, arjun;	// static allocation
	
	btech *s = new btech;		// dynamic allocation
	
	return 0;
}
