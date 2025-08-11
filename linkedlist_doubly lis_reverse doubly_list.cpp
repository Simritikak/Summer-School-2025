#include <iostream>
using namespace std;

class node{
	
	public:
		int data;
		node* prev;
		node* next;
		
		node(int d): data(d), prev(NULL), next(NULL){}
};

void insertTail( node* &head, int val){
	
	node* newnode = new node(val);
	
	if( head == NULL ){
		
		head = newnode;
		return;
	}
	
	node* temp = head;
	while( temp->next != NULL )
		temp = temp->next;
	
	newnode->prev = temp;	
	temp->next = newnode;
}

void fprint(node* head){
	
	node* temp = head;
	
	while( temp != NULL ){
		
		cout<< temp->data<<" ";
		temp = temp->next;
	}
}

void bprint(node* head){
	
	node* temp = head;
	while( temp->next != NULL )
		temp = temp->next;
	
	while( temp != NULL ){
		
		cout<<temp->data <<endl;
		temp = temp->prev;
	}
}

// implement a function to reverse doubly linkedlist.

void reverse(node* &head){
	
	node* temp = NULL;
	node* curr = head;
	
	while( curr != NULL ){
		
		temp = curr->prev;
		curr->prev = curr->next;
		curr->next = temp;
		
		curr = curr->prev;
	}
	
	head = temp->prev;
}

int main(){
	
	node* head = NULL;
	
	insertTail( head, 10);
	insertTail( head, 20);
	insertTail( head, 30);
	insertTail( head, 40);
	insertTail( head, 50);
	insertTail( head, 60);
	
	fprint( head );
	reverse( head );
	cout<<endl;
	fprint( head);
	
	return 0;
}
