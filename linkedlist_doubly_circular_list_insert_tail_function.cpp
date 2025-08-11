#include <iostream>
using namespace std;

class node{
	
	public:
		int data;
		node* prev;
		node* next;
		
		node(int d): data(d), prev(NULL), next(NULL){}
};

void print( node* head ){
	
	node* temp = head;
	
	while( temp->next != head ){
		
		cout<< temp->prev <<"\t"<< temp->data<<"\t"<<temp->next <<endl;
		
		temp = temp->next;
	}
	cout<< temp->prev <<"\t"<< temp->data<<"\t"<<temp->next <<endl;
}

void insertTail( node* &head, int val){
	
	node *newnode = new node(val);
	
	if( head == NULL ){
		
		newnode->prev = newnode;
		newnode->next = newnode;
		
		head = newnode;
		return;
	}
	
	newnode->prev = head->prev;
	newnode->next = head;
	
	head->prev->next = newnode;
	head->prev = newnode;
	
}

int main(){
	
	node* head = NULL;
	
	insertTail( head, 10 );
	insertTail( head, 20 );
	insertTail( head, 30 );
	insertTail( head, 40 );
	insertTail( head, 50 );
	insertTail( head, 60 );
	
	print( head );
	
	return 0;
}
