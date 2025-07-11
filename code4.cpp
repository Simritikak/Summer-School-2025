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

		// Initilizer list		
		btech(int r, float c): roll(r), cgpa(c){}
		
//		btech(int r, float c){
//			
//			roll = r;
//			cgpa = c;
//		}
		
		void display(){
			
			cout<<"Roll: "<<roll<<endl;
			cout<<"CGPA: "<<cgpa<<endl;
		}
		
};

int main(){
	
	btech simriti(1, 9.5);
	
	simriti.display();
	
	return 0;
}
