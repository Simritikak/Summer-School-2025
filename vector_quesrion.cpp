#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> v = {23, 10, 24, 788, 89, 45};	
	
	int i=0, max= INT_MIN;
	
	while( i != v.size() ){
		
		if( v[i] > max )
			max = v[i];
		
		i++;
	}
	
	cout<<"Max: "<< max<<endl;
	
	return 0;
}
