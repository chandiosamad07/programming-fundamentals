#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the value of a ";
	cin>>a;	
	
	
	cout<<"Enter the value of b ";
	cin>>b;	
	
	cout<<"\nBefore the value  a  is "<<a;
	
	cout<<"\nBefore the value  b  is "<<b<<endl;
	
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"\nAfter the value of a is "<<a;
	cout<<"\nAfter the value of b is "<<b;
	
	
	
	
	
	
	return 0;
}
