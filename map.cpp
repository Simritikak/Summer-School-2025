#include <iostream>
#include <map>
using namespace std;

int main(){
	
	map <string, int> mp;
	
	mp["Aryan"] = 5;
	mp["Anurag"] = 2;
	mp["Ashish"] = 9;
	
	mp.insert( {"Abhi", 1} );
	mp.insert( { "Abhinav", 17 } ) ;
	
	for( auto it: mp ){
		
		cout<< it.first<<" \t"<< it.second<<endl;
	}
	 
	
	return 0;
}
