#include <iostream>
#define size 5
using namespace std;

class myQueue{
	
	public:
		int arr[size];
		int f;
		int r;
		
		myQueue(): f(-1), r(-1){}
		
		void push(int val){
			
			if( r == size-1 ){
				
				cout<<"Overflow: "<<endl;
				return;
			}
			
			if( f==-1 && r==-1)
				f++;
			
			r++;
			arr[r] = val;
		}
		
		void pop(){
			
			if( f == r ){
				
				cout<<"Underflow: "<<endl;
				return;
			}	
			if( f>r )
				f=r=-1;
			f++;
		}
		
		bool empty(){
			
			if( f == r )
				return true;
			else
				return false;	
		}
		
		int front(){
			
			return arr[f];
		}
		
		int back(){
			
			return arr[r];
		}
};

int main(){
	
	myQueue q;
	
	q.push( 10 );
	q.push( 20 );
	q.push( 30 );
	q.push( 40 );
	q.push( 50 );
//	q.push( 60 );
	
	while( !q.empty() ){
		
		cout<< q.front() <<" ";
		q.pop();
	}
	cout<<q.front();
	
	return 0;
}
