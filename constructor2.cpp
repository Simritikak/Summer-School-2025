#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll;
		float cgpa;
		
		btech(){
			cout<<"Constructor having no paramenter: \n";
		}
		
		btech( int r ){
			cout<<"Constructor having one parameter: \n";
		}
			
		btech( int r, float c ){
			cout<<"Constructor having two paramenter: \n";
		}
		
		~btech(){
			cout<<"Distructor called: \n";
		}
};

int main(){
	
	btech s1( 34, 9.3 );
	btech s2( 32 );
	btech s3;
	
	btech *s4 = new btech(10, 8.7);
	
	delete s4;
	
	return 0;
}
