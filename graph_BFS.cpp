#include <iostream>
#include <vector>
#include <queue>
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

void BFS(int G[7][7], int start, int n){
	
	vector<int> visited(n, 0);
	queue <int> q;
	cout<< start <<" ";
	visited[start] = 1;
	q.push( start );
	
	while( !q.empty() ){
		
		int i = q.front();
		q.pop();
		
		for( int j=1; j<n; j++ ){
			
			if( G[i][j] == 1 && visited[j] == 0 ){
				cout<<j <<" ";
				visited[j] = 1;
				q.push( j );
			}
		}
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
	
	BFS(G, 1, 7 );
	
	
	return 0;
}
