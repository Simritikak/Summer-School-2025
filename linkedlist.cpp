#include <iostream>
using namespace std;

class node{
	
	public:
		int data;
		node* next; 	// self referential pointer
};

int main(){
	
	node *n1 = new node;
	n1->data = 10;
	n1->next = NULL;
	
	node* n2 = new node;
	n2->data = 20;
	n2->next = NULL;
	n1->next = n2;
	
	node * n3 = new node;
	n3->data = 30;
	n3->next = NULL;
	n2->next = n3;
	
	cout<< n1->data <<" -> "<< n1->next<<endl;
	cout<< n2->data <<" -> "<< n2->next<<endl;
	printf("%d -> %s", n3->data, n3->next);
	
	return 0;
}
