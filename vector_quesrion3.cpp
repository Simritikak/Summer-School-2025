#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> v1 = {10, 20, 30, 40, 50};	
	vector<int> v2 = {30, 40, 50, 60, 70};	
	
	vector <int> ans;
	
	for(int i=0; i<v1.size(); i++){
		
		for(int j=0; j<v2.size(); j++){
			
			if( v1[i] == v2[j] )
				ans.push_back( v1[i] );
		}
	}
	
	for(auto i: ans) cout<< i <<" ";
	
	
	
	
	return 0;
}
