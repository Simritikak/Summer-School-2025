//WAP to print student detail roll and cgpa. 
//
//note: 
//	intilize roll and cgpa using constructor and print this detail via display 
//	function.
//	
//	roll and cgpa must be data member of btech class.

#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll;
		float cgpa;
		
		btech(int r, float c){
			
			roll = r;
			cgpa = c;
		}
		
		void display(){
			
			cout<<"Roll: "<<roll<<endl;
			cout<<"CGPA: "<<cgpa<<endl;
		}
		
};

int main(){
	
	btech aryan(1, 9.5);
	
	return 0;
}
