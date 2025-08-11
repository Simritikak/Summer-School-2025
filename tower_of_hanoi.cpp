#include <iostream>
using namespace std;

class ring{
	
	public:
		
		class node{
			
			public:
				int data;
				node* next;
			
				node(int val): data(val), next(NULL){}
		};
		node* top = NULL;
		
		void push(int val){
			
			node* newnode = new node(val);
			
			newnode->next = top;
			top = newnode;
		}
		
		void pop(){
			
			if( top == NULL ){
				
				cout<<"No element inside hanoi\n";
				return;
			}
			
			node* temp = top;
			top = top->next;
			delete temp;
		}
		
		int getTop(){
			
			if( top == NULL ){
				
				cout<<"No element inside hanoi\n";
				return -1;
			}
			return top->data;
		}
		
		void display(){
			
			node* temp = top;
			while( temp != NULL ){
				
				cout<< temp->data<<endl;
				temp = temp->next;
			}
		}
		
		bool empty(){
			
			return top;			
		}
};

int main(){
	
	ring h1;
	
	h1.push( 10 );
	h1.push( 30 );
	h1.push( 45 );
	h1.push( 18 );
	h1.push( 19 );
	h1.push( 17 );
	
	h1.pop();
	h1.pop();
	
	h1.display();
	
	
	return 0;
}
