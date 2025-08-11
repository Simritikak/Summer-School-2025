#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> v = {10, 20, 30, 40, 50};
	
	int i=4;
	while( i ){
		
		cout<<v[i+1]<<" ";
		i--;
	}
	
	return 0;
}
