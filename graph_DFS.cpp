#include <iostream>
#include <vector>
using namespace std;

void DFS(int G[7][7], int start, int n, vector<int>& visited){
	
	if( visited[start] == 0 ){
		
		cout<< start <<" ";
		visited[start] = 1;
	}
	
	for(int j=1; j<n; j++){
		
		if( G[start][j] == 1 && visited[j] == 0 )
			DFS(G, j, n, visited);
	}
}

int main(){

	int G[7][7] = {
		
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 1, 1, 0, 0, 0},
		{0, 1, 0, 0, 1, 0, 0},
		{0, 1, 0, 0, 1, 0, 0},
		{0, 0, 1, 1, 0, 1, 1},
		{0, 0, 0, 0, 1, 0, 0},
		{0, 0, 0, 0, 1, 0, 0}
	};	
	
	vector<int> visited(7,0);
	
	DFS(G, 1, 7, visited );
	
	
	return 0;
}
