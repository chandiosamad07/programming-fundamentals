#include<iostream>
using namespace std;
int main(){
	float in,a,b,c;
	cout<<"\n\t------------------------------------------------\n";
	
	cout<<"\n\t\tWelcome to My calculator \n ";
	
	cout<<"\n\t\tFor Addition press 1\n";
	cout<<"\n\t\tFor subtract press 2\n";
	cout<<"\n\t\tFor Multiply press 3\n";
	cout<<"\n\t\tFor divide press 4\n";
	cout<<"\n\t\tSelect one opration ";
	cin>>in;

	cout<<"\n\t\tEnter the first value";
		
		cin>>a;
	
	cout<<"\n\t\tEnter the Second value";
		
		cin>>b;
	if(in==1){
		c=a+b;
		cout<<"\n\t\tThe Sum of two number is : "<<c;
	}
	
	else if(in==2){
		c=a-b;
		cout<<"\n\t\tThe Sub of two number is : "<<c;
	}
	
	else if(in==3){
		c=a*b;
		cout<<"\n\t\tThe Multiply of two number is : "<<c;
	}
	else if(in==4){
		c=a/b;
		cout<<"\n\t\tThe Divide  of two number is : "<<c;
		
	}
	else{
		cout<<"\n\t\tinvild";
	}
	cout<<"\n\t------------------------------------------------\n";
	
	return 0;
}
