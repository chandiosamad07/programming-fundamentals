#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter three number ";
	cin>>a>>b>>c;
	
	if(a<b && b<c){
		
		cout<<c<<b<<a<<" : is in accending order "<<endl;
		
		
	}
	else{
		
		cout<<a<<b<<c<<" : is not in accending order";
		
	}
	
	
	return 0;
}
