#include <iostream>
using namespace std;
int main(){
	char a;
	cout<<"Enter a alphabet";
	cin>>a;
	if((a>='A'&& a<='Z')||(a>='a'&& a<='z'))
	{
		cout<<"This is alphabet";
		
		
	}
	else{
		cout<<"This is not alphabet";
	}
	return 0;
}

