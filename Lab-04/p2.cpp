#include <iostream>
using namespace std;
int main(){
	string name,pass;
	cout<<"Enter user  name";
	cin>>name;
	
	cout<<"Enter user password";
	cin>>pass;
	
	if((name=="SIBA")&&(pass=="siba"))
	{
		system ("CLS");
		cout<<"welcome to my world";
	}
	else{
		cout<<"sorry! you entered invaild";
		
	}
	return 0;
}
