#include <iostream>
using namespace std;
#define V 6

class Graph{
	
	public:
		int adjMatrix[V][V];
		
		Graph(){
			
			for(int i=0; i<V; i++){
				
				for(int j=0; j<V; j++){
					
					adjMatrix[i][j] = 0;
				}
			}
		}
		
		void addEdge(int u, int v){
			
			adjMatrix[u][v] = 1;
			adjMatrix[v][u] = 1;
		}
		
		void print(){
			
			for(int i=0; i<V; i++){
				
				for(int j=0; j<V; j++){
					
					cout<< adjMatrix[i][j] <<" ";
				}
				cout<<endl;
			}
		}
};

int main(){
	
	Graph g;
	
	g.addEdge( 1, 2 );
	g.addEdge( 1, 3 );
	g.addEdge( 1, 4 );
	g.addEdge( 2, 1 );
	g.addEdge( 3, 1 );
	g.addEdge( 3, 4 );	
	
	g.print();
	
	return 0;
}
