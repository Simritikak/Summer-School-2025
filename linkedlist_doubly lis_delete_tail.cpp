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
        cout << temp->prev << "\t" << temp->data << "\t" << temp->next << endl;
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

int main() {
    node* head = NULL;  
    
    insertHead(head, 9);
    insertHead(head, 8);
    insertHead(head, 7);
    insertHead(head, 6);
    insertHead(head, 5);
    insertHead(head, 4);
    insertHead(head, 3);
    deleteTail( head );
    deleteTail( head );

    fprint(head);
    cout << endl;

    return 0;
}

