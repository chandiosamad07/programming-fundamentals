#include <iostream>
using namespace std;
int main(){
	int h,b,p,sum;
	cout<<"Enter the value of h ";
	cin>>h;
	
	cout<<"Enter the value of b ";
	cin>>h;
	
	
	cout<<"Enter the value of p ";
	cin>>p;
	
	
	h=h*h;
	b=b*b;
	p=p*p;
	sum=p+b;
	if(h==sum){
		cout<<"THis is right triangle";
		
	}
	
	else{
		cout<<"This is not right triangle";
	}
	
	




	return 0;
}
