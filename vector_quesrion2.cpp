#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> v = {23, 10, 24, 78, 89, 45};	
	
	for(int i=v.size()-1, j=0; j<i; i--, j++)
		swap(v[i], v[j]);
		
	
	for(auto i: v)	cout<<i<<" ";
		
	
	return 0;
}
