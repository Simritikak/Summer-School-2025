#include <iostream>
#include <queue>
using namespace std;

class tree{
	
	public:
		int data;
		tree* left;
		tree* right;
		
		tree( int val ): data(val), left(NULL), right(NULL){}

};

void pre_order( tree* root ){
	
	if( root == NULL )
		return;
		
	cout<< root->data <<" ";
	pre_order( root->left );
	pre_order( root->right ); 
}

void post_order( tree* root ){
	
	if( root == NULL )
		return;
	
	post_order( root->left );
	post_order( root->right );
	
	cout<< root->data<<" ";
}

void levelOrder(tree * root) {

        if( root == NULL )
            return;
        
        queue <tree*> q;
        q.push( root );
        
        while( !q.empty() ){
            
            tree* curr = q.front();
            q.pop();
            
            cout<< curr->data <<" ";
            
            if( curr->left )
                q.push( curr->left );
            
            if( curr->right )
                q.push( curr->right );
        }
}

int main(){
	
	tree* root = new tree( 10 );	
	
	root->left = new tree( 20 );
	root->right = new tree( 30 );
	root->left->left = new tree( 40 );
	root->left->right = new tree( 50 );
	
	root->right->left = new tree( 60 );
	root->right->right = new tree( 70 );
	
	levelOrder( root );
	
	return 0;
}
