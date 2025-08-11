#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	vector <int> v = {23, 10, 24, 78, 89, 45};
	
	for(auto i: v)		// iterator
		cout<<i<<" ";
	
	sort( v.begin(), v.end() );
	
	cout<<endl;
	for(auto i: v)		// iterator
		cout<<i<<" ";
	
	
	return 0;
}
