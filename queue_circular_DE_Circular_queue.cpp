#include <iostream>
#define size 5
using namespace std;

class cDEqueue{
	
	public:
		int arr[size];
		int front;
		int rear;
		
		cDEqueue(){
			
			front = rear = -1;
		}
		
		bool isFull(){
			
			if( (front == 0 && rear == size-1) || (rear+1)%size  == front )
				return true;
			else
				return false;
		}
		
		bool isEmpty(){
			
			if( front == -1 )
				return true;
			else
				return false;
		}
		
		void insertFront( int val ){
			
			if( isFull() ){
				
				cout<<"DE Circular queue is full: \n";
				return;
			}
			
			if( isEmpty() )
				front = rear = 0;
			
			else if( front == 0 )
				front = size -1;
			else
				front --;
			
			arr[front] = val;
		}
		
		void insertRear(int val){
			
			if( isFull() ){
				
				cout<<"DE Circular queue is full: \n";
				return;
			}
			 
			if( isEmpty() )
				front = rear = 0;
				
			else if( rear == size-1 )
				rear = 0;
			else
				rear++;
			
			arr[rear] = val;
		}
		
		void deleteFront(){
			
			if( isEmpty() ){
				
				cout<<"DE Circular queue is empty: \n";
				return;
			}
			
			if( front == rear )
				front = rear = -1;
			
			else if( front == size-1 )
				front = 0;
			
			else
				front++;
		}
		
		void deleteRear(){
			
			if( isEmpty() ){
				
				cout<<"DE Circular queue is empty: \n";
				return;
			}
			
			if( front == rear )
				front = rear = -1;
				
			else if( rear = 0 )
				rear = size-1;
			else
				rear--;
		}
		
		int getFront(){
			
			if( isEmpty() ){
				
				cout<<"DE Circular queue is empty: \n";
				return -1;
			}
			
			return arr[front];
		}
		
		int getRear(){
			
			if( isEmpty() ){
				
				cout<<"DE Circular queue is empty: \n";
				return -1;
			}
			
			return arr[rear];
		}
};

int main(){
	
	
	return 0;
}
