#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;

    node(int d): data(d), prev(NULL), next(NULL) {}
};

void fprint(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data<< " ";
        temp = temp->next;
    }
}

void insertTail(node* &head, int val) {
    node* newnode = new node(val);

    if(head == NULL) {
        head = newnode;
        return;
    }

    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    newnode->prev = temp;
    temp->next = newnode;
}


void insertHead(node* &head, int val){
	
	node* newhead = new node(val);
	
	if( head == NULL ){
		
		head = newhead;
		return;
	}
	
	newhead->next = head;
	head->prev = newhead;
	
	head = newhead;
}

void deleteTail( node* head ){
	
	node* temp = head;
	
	while( temp->next->next != NULL)
		temp = temp->next;
	
	node* todelete = temp->next;
	temp->next = NULL;
	
	delete todelete;
}

void deleteAtPosition(node* head, int pos){
	
	node* temp = head;
	int i=0;
	while( i != pos-1 ){
		
		temp = temp->next;
		i++;
	}
	
	node* todelete = temp->next;
	todelete->next->prev = temp;
	temp->next = todelete->next;
	
	delete todelete;
}

// implement a function to delete series of node.
//	deleteSeries( head, 2, 5 );

/*
void delteSeries(node* head, int s, int e){
	
	for(int i=e-1; i>s; i--)
		deleteAtPosition( head, i);
}
*/

void deleteSeries(node* head, int s, int e){
	
	 node *current = head;
	 int pos = 0;
	 
	 while(current && pos < s){
	 	current = current->next;
	 	pos++;
	 }
	 
	 while(current && pos <=e){
	 	node* temp =current;
	 	current = current->next;
	 	
	 	if(temp->prev){
	 		temp->prev->next = current;
		 }
		 else{
		 	head = current;
		 }
		 
		 if(current){
		 	current->prev = temp->prev;
		 }
		 delete temp;
		 pos++;
	 }
		
}


int main() {
    node* head = NULL;  
    
    insertHead(head, 9);
    insertHead(head, 8);
    insertHead(head, 7);
    insertHead(head, 6);
    insertHead(head, 5);
    insertHead(head, 4);
    insertHead(head, 3);
    insertTail(head, 10);
    insertTail(head, 20);

    fprint(head);
    cout << endl;
    deleteSeries( head, 2, 5 );
    fprint(head);

    return 0;
}

