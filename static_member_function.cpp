#include <iostream>
using namespace std;

class btech{
	
	public:
		int nonStatic;
		static int staticVar;		// static variable;
		
		btech(): nonStatic(10){}
		
		static void staticFun(void){
			
			cout<<"I am static Method: "<<endl;
			cout<<"Static var: "<< staticVar<<endl;	// 2
//			cout<<"Non static var: "<< nonStatic <<endl;	// error
		}
		
		void nonStaticFunc(){
			
			cout<<"I am non-static Method: "<<endl;
			cout<<"Static var: "<< staticVar<<endl;	// 2
			cout<<"Non static var: "<< nonStatic <<endl;	// 10
		}
};

int btech::staticVar = 2;	// global initialization is mendotary

int main(){
	
	btech::staticFun();
	
//	btech s1, s2;
//	
//	s1.nonStaticFunc();
//	s1.staticFun();
	
	return 0;
}
