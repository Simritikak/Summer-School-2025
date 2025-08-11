#include <iostream>
#include <vector>
using namespace std;

int main(){
	
//	vector < data_type > v;
	vector <vector<int> > v;
	
	v.push_back( {10, 20, 30} );
	v.push_back( {40, 50, 60} );
	
	for(auto x: v){
		
		for(auto y: x){
			
			cout<< y<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
