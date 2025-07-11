#include <iostream>
using namespace std;

class node{
	
	public:
		int data;
		node* prev;
		node* next;
		
		node(int d): data(d), prev(NULL), next(NULL){}
};

void fprint(node* head){
	
	node* temp = head;
	
	while( temp != NULL ){
		
		cout<<head->prev<<"\t" <<head->data <<"\t"<< head->next<<endl;
		temp = temp->next;
	}
}


void bprint(node* head){
	
	if( head == NULL )
		return;
	
	bprint( head->next );
	cout<< head->data <<" ";
}

void insertTail( node* head, int val){
	
	node* newnode = new node(val);
	
	node* temp = head;
	while( temp->next != NULL )
		temp = temp->next;
	
	newnode->prev = temp;	
	temp->next = newnode;
}

int main(){
	
	node* head = new node(10);
	
	insertTail( head, 20 );
	insertTail( head, 30 );
	insertTail( head, 40 );
	insertTail( head, 50 );
	
	fprint( head );
	cout<<endl;
	
	return 0;
}
